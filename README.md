# Dynamic-programming

Dynamic programming is a problem-solving technique that involves breaking down a complex problem into smaller subproblems and </br>
      solving each subproblem only once. The technique is based on the idea of "optimal substructure," which means that the optimal solution</br>
      to a problem can be obtained from the optimal solutions to its subproblems.</br></br>
	<h3>- Optimal substructure and overlapping subproblems are two important concepts in dynamic programming:</h3>
		1) Optimal substructure: </br>
    breaking down the problem into smaller subproblems, solving each subproblem independently, and then combining the solutions to obtain the overall optimal solution.</br>
		2) Overlapping subproblems: refer to the property of a problem where the same subproblems appear multiple times in the computation of the overall solution. 
		   dynamic programming can be used to avoid redundant computations by storing the results of each subproblem in a table or array. By doing so, the algorithm can avoid recomputing the same subproblem multiple times and improve the efficiency of the overall 			   computation.
		   
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
		
			Example: Climbing stairs problem
				- you are climbing a stair case. It takes n steps to reach the top.
				- each time you can either climb 1 or 2 staps
				- in how many distinct ways you climb the top?
