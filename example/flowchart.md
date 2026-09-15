```mermaid
flowchart TD
    Start([시작]) --> Init["변수 및 배열 초기화 (total_ping=0, time_count={0}, ip_count=0)"]
    Init --> OpenFile["'ping.txt' 파일 읽기 모드로 열기"]
    OpenFile --> CheckFile{파일이 정상적으로\n열렸는가?}
    
    CheckFile -- 아니오 --> PrintError["에러 메시지 출력"]
    PrintError --> End([종료])
    
    CheckFile -- 예 --> ReadLine{"파일에서 한 줄 읽기\n(fgets)"}
    
    ReadLine -- "성공(데이터 있음)" --> IncTotalPing["total_ping 1 증가"]
    IncTotalPing --> ExtractTime["'-' 문자를 찾아 시간(hour) 추출"]
    ExtractTime --> CheckValidTime{"0 <= hour < 24"}
    
    CheckValidTime -- 예 --> IncTimeCount["time_count[hour] 1 증가"]
    CheckValidTime -- 아니오 --> ExtractIP["'->' 문자열 앞부분의 출발지 IP(src) 추출"]
    IncTimeCount --> ExtractIP
    
    ExtractIP --> CheckValidIP{"IP 추출 성공?"}
    
    CheckValidIP -- 아니오 --> ReadLine
    CheckValidIP -- 예 --> LoopIPList{"iplist 배열에\n동일한 IP가 있는가?"}
    
    LoopIPList -- 예 --> IncIPCount["해당 IP의 count 1 증가"]
    LoopIPList -- 아니오 --> CheckCapacity{"ip_count < 128"}
    
    CheckCapacity -- 예 --> AddNewIP["iplist에 새 IP 추가 (count=1)\nip_count 1 증가"]
    CheckCapacity -- 아니오 --> ReadLine
    
    AddNewIP --> ReadLine
    IncIPCount --> ReadLine
    
    ReadLine -- "실패(EOF 도달)" --> CloseFile["파일 닫기 (fclose)"]
    
    CloseFile --> SortIPList["iplist 배열을 count 기준 내림차순 정렬\n(버블 정렬)"]
    SortIPList --> FindMaxTime["time_count 배열을 순회하며\n핑 횟수가 가장 많은 시간대(max_hour) 찾기"]
    FindMaxTime --> PrintResult["결과 출력\n(전체 횟수, TOP 3 IP, 최대 핑 시간대)"]
    
    PrintResult --> End