def push(val, stk, top):
    top += 1
    stk.append(val) 
    return top

def pop(stk, top):
    if top == -1:
        print("Stack is empty!")
        return top
    else:    
        stk.remove(stk[top])
        return top-1

stk = []
top = -1
top = pop(stk, top) ## UnderFlow
top = push(2, stk, top)
top = push(4, stk, top)
print(top)
print(stk)
