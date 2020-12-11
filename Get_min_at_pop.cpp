#include <bits/stdc++.h>


std::stack<int>temp_stack;
std::stack<int> _push(int arr[],int n)
{
   temp_stack.push(arr[0]);
   std::stack<int> s ;
   s.push(arr[0])
   for (int i = 1; i < n; ++i)
   {
   	// storing all minimum possible to the help stack
   	if(arr[i]<=temp_stack.top())
   		temp_stack.push(arr[i]);
   	    s.push(arr[i]);
   }
   return s ; 
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(std::stack<int>s)
{
	int n = s.size();
   for (int i = 0; i < n; ++i)
   {
   	if (s.top() > temp_stack.top()) {
      std::cout<<temp_stack.top()<<" ";
      s.pop();
   	}
    else {
   	std::cout<<temp_stack.top()<<" ";
   	temp_stack.pop();
   	s.pop();
   }
  
   }
}

int main(int argc, char const *argv[])
{
int arr[]= {1, 6, 43, 1, 2, 0, 5};
int n = sizeof(arr)/sizeof(arr[0]);
std::stack<int> s = _push(arr, n);
_getMinAtPop(s);
return 0;
}