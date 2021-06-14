  int evalRPN(vector<string>& tokens) {
     stack<int> my_stack;
        int i, sum, first, second;
        my_stack.push(stoi(tokens[0]));

        for(i=1; i<tokens.size(); i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-"|| tokens[i]=="*" || tokens[i]=="/")
            {
                second = my_stack.top();
                my_stack.pop();
                first = my_stack.top();
                my_stack.pop();
            
                
            
            if(tokens[i]=="+"){sum = first+second;}
            else if(tokens[i]=="-"){sum = first-second;}
            else if(tokens[i]=="*"){sum = first * second;}
            else{sum = first / second;}
            
            my_stack.push(sum);
         
            }
            else{my_stack.push(stoi(tokens[i]));}
        }
        return my_stack.top();
    }
