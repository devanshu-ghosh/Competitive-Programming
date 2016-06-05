void update_tree(int node, int a, int b, int i, int j, int value)
{
  	if(lazy[node] != 0)
	{
		// This node needs to be updated
   		tree[node] += lazy[node]; // Update it
   		//propagate the lazy update to its childrens
		if(a!=b)//check to ensure the boundary conditions
		{
				lazy[node*2] += lazy[node]; // Mark child as lazy
    			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}
   		lazy[node] = 0; // Reset it
  	}
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
  	if(a >= i && b <= j)
	{
		// Segment is fully within range
		//so we update the current node and mark its children in the lazy
		//and return back. No further operations
    	tree[node] += value;
		if(a!=b)
		{ // Not leaf node
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}
    	return;
	}
	//if control reaches here then we need to recurse for the LS and RS
	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
	tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree(int node, int a, int b, int i, int j)
{
	if(a > b || a > j || b < i) return -inf; // Out of range
	if(lazy[node] != 0)
	{ // This node needs to be updated
		tree[node] += lazy[node]; // Update it
		if(a != b)
		{
			lazy[node*2] += lazy[node]; // Mark child as lazy
			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}
		lazy[node] = 0; // Reset it
	}
	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];
	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
	int res = max(q1, q2); // Return final result	
	return res;
}
