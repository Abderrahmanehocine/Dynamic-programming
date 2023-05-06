- Dynamic programming:
	-Definition: 
		Dynamic programming is a problem-solving technique that involves breaking down a complex problem into smaller subproblems and 			solving each subproblem only once. 
		The technique is based on the idea of "optimal substructure," which means that the optimal solution to a problem can be obtained 			from the optimal solutions to its subproblems.
		
	- Optimal substructure and overlapping subproblems are two important concepts in dynamic programming.
	
		1) Optimal substructure:  breaking down the problem into smaller subproblems, solving each subproblem independently, and then 			   combining the solutions to obtain the overall optimal solution.
		
		2) Overlapping subproblems: refer to the property of a problem where the same subproblems appear multiple times in the computation 		   of the overall solution. 
		   dynamic programming can be used to avoid redundant computations by storing the results of each subproblem in a table or array. 		   By doing so, the algorithm can avoid recomputing the same subproblem multiple times and improve the efficiency of the overall 			   computation.
		   
	- Combinatorial problems and optimization problems are two types of problems that can be solved using dynamic programming.
	
		1) Combinatorial problems involve counting the number of ways to arrange or select objects from a set according to certain rules 			   or constraints. (Asking the question How many?)
			Example: How many ways to traverse a graph?
				 How many staps needed to get from point A to point B?
		
		2) Optimization problems involve finding the best solution to a problem among a set of possible solutions. 
		   (Asking the question What is the minimum?)
		   	Example: What is the minimum number of steps needed to get from point A to point B?
		   		  What is the minimum cost to travel from Algeria to Canada?
	
	- Memoization and tabulation are two techniques used in dynamic programming to store the results of subproblems to avoid redundant    		  computation.
	
		1) Memoization involves storing the results of already solved subproblems in a cache or memory, and retrieving them when the same 		   subproblem is encountered again.
	           This technique is commonly used in recursive implementations of dynamic programming algorithms. When a subproblem is 			   encountered, the algorithm first checks if the solution is already in the cache. If it is, the cached result is returned, 			   otherwise, the subproblem is solved recursively and the solution is stored in the cache for future use.
	           Memoization is a top-down approach where we start with the original problem and recursively break it down into smaller 		   subproblems until we reach the base cases. We store the solutions to the subproblems in a memoization table and use these 			   solutions to avoid redundant calculations in future recursive calls. This approach is called top-down because we start with 
	           the original problem and work our way down to the base cases.
	           
	       2) Tabulation is a technique used in dynamic programming to solve optimization problems by storing and using the results of already 		  computed subproblems in a table or array. The algorithm starts by solving the smallest subproblems and then iteratively builds 			  up to solve larger subproblems using the results of previously solved subproblems. The final solution is obtained from the last 		  entry in the table. The tabulation technique is also known as bottom-up dynamic programming because it starts with the smallest 		  subproblems and builds up to solve the larger ones.
	       
	- Framework to sovle a dynamic programming problem:
		1- Define the objective function
		2- Identify the base cases
		3- Write the recurrence relation (transition function)
		4- Identify the order of execution
		5- Identify the location of the answar
		
			Example: 
				Problem: Climbing stairs problem
				- you are climbing a stair case. It takes n steps to reach the top.
				- each time you can either climb 1 or 2 staps
				- in how many distinct ways you climb the top?
				
				Solution: 
					1- the objective function: 
						f(i) is the number of distinct ways to reach the i-th stair.
					2- the base cases:
						f(0) = 1
						f(1) = 1
					3- the recurrence relation:
						f(n) = f(n-1) + f(n-2)
					4- the order of execution:
						if we use memoization (top-down)
						if we use tabulation (buttom-up)
					5- where to find the answer:
						f(n) is the answer
						
					// This is a memoization solution
					 	// time and space complexity is O(n)
					int climbing_stairs(int *stairs, int num){
   						 if(stairs[num] != 0 )
      						 	return stairs[num];
    						stairs[num] = climbing_stairs(stairs, num-1) + 
							      climbing_stairs(stairs, num-2);
   						return stairs[num];
					}
					
					// This is a tabulation solution
						// time and space complexity is O(n)
					int climbing_stairs(int num){
						int stairs[num+1];
						stairs[0] = 1;
						stairs[1] = 1;
						
						int i;
						for(i=2 ; i<=num ; i++)
							stairs[i] = stairs[i-1] + stairs[i-2];
						return stairs[num];
					}	
		
		
		
	
