def screen():
    print("\n####간단한 회원 관리 앱####")
    print("0초기생성 1회원추가 2회원목록 3회원찾기 4정보수정 5종료")
    
def createNodeInit(memlist):
    newNode = createNode()
    newNode.append('bb ss')
    newNode.append('11 aa')
    newNode.append('23')
    memlist.append(newNode)
    return memlist

def createNode():
    newNode = []
    return newNode

def memberAllList(memlist):
    print("\n-----회원 목록-----")
    print("이름\t이메일\t나이")
    for m in memlist:
        print("{}\t{}\t{}".format(m[0], m[1], m[2]))
def memberAdd(memlist):
    newNode = createNode()
    
    name = input("-> 이름: ")
    newNode.append(name)
    mail = input("-> 이메일: ")
    newNode.append(mail)
    age = input("-> 나이: ")
    newNode.append(age)
    memlist.append(newNode)
    return memlist

def memberSearch(memlist):
    ser_name = input("찾는 회원 이름: ")
    for oneman in memlist:
        if ser_name in oneman:
            print("{}\t{}\t{}".format(oneman[0], oneman[1], oneman[2]))
            break;
        
def memberModify(memlist):
    ser_name = input("찾는 회원 이름: ")
    for oneman in memlist:
        if ser_name in oneman:
            print("{}\t{}\t{}".format(oneman[0], oneman[1], oneman[2]))
    print("-> {}, 이메일만 변경가능".format(oneman[1]))
    oneman[1] = input("수정할 이메일: ")
    print("수정함!")
        
if __name__ == "__main__":
    memlist = []
    
    while True:
        screen()
        choice = input("-->")
        
        if choice=='0': #0초기생성
            createNodeInit(memlist)
        elif choice=='1': #1회원추가
            memberAdd(memlist)
        elif choice=='2': #2회원목록
            memberAllList(memlist)
        elif choice=='3': #3회원찾기
            memberSearch(memlist)
        elif choice=='4': #4정보수정
            memberModify(memlist)
        elif choice=='5': #5종료
            print("회원관리 앱 종료합니다.")
            break