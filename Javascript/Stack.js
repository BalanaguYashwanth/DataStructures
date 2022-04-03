class stack{
    constructor(){
        this.item=[];
        this.count=0;
    }
    
    push(element){
        this.item[this.count] = element
        console.log(`element is created in stack ${this.item[this.count]} at ${this.count} position`)
        this.count=this.count+1
    }

    peek(){
        console.log(`top element position in stack is ${this.item[this.count-1]} at ${this.count-1} position`)
    }


    pop(){
        if(this.count==0) {console.log('stack is empty')} 
        if(this.count>0)
        {
            console.log(`element is removed in stack ${this.item[this.count-1]} at ${this.count-1} position`)
            this.count=this.count-1
        }       
    }

    clear(){
        this.item=[]
        this.count=0
        console.log('Elements in the stack was cleared')
    }

}

const Stack = new stack()

Stack.push(100)
Stack.push(200)
Stack.push(300)
Stack.peek()
Stack.pop()
Stack.peek()
Stack.pop()
Stack.clear()
Stack.pop()
Stack.pop()
Stack.pop()
