/*
Q2)


Write a C program that accepts the vertices and edges of a graph and store it as an 
Adjacency matrix . Implement functions to print the indegree , Outdegree and Total 
degree of all the vertices of a graph;


*/

#include<stdio.h>
#include<conio.h>
 
int  main()
{
    int i,j,n,m[10][10],ind,outd,total,v=0;
    void rbfs(int m[10][10],int n);
 
    printf("\nEnter no. of vertex in graph:");
    scanf("%d",&n);
    
    printf("\nEnter adjacency matrix \n:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
    	
    	scanf("%d",&m[i][j]);
    	
	}
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                printf("\nIs the edge present between %d & %d(1,0)",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }
    }
    printf("\nAdjacency matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
    printf("\nIndegree, Outdegree  &  Total degree :");
    for(i=0;i<n;i++)
    {
        for(j=0,ind=0,outd=0;j<n;j++)
        {
            if(m[i][j] == 1)
            outd++;
            if(m[j][i] == 1)
            ind++;
            total=ind+outd;
        }
        printf("\nv%d %5d %5d %5d\n",i+1,ind,outd,total);
    }
 
}
