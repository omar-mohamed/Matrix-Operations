#include <iostream>
#include<math.h>
#include <conio.h>
#include <string.h>
#include <io.h>
#include <strsafe.h>
using namespace std;

void menu();
void add();
void subtract();
void transpos();
void multiplication ();
void inverse();
void determinent();
void scalar_ultiply();
void scalar_divide();
void Set_row_value();
void Set_column_value();
void Compare_two_matrices();
void pos( int x,int y);
void color(char c,char c1);
float detrm( float**, int );

int i,j,k,m,n,p,q; 
int main()
{  
	menu();	
}


void menu()
{
	char* m[13];
	m[1]=" Add two matrices                              ";
	m[2]=" Subtract two matrices                         ";
	m[3]=" Multiply two matrices                         ";
	m[4]=" Transpos matrices                             ";
	m[5]=" Inverse  matrices                             ";
	m[6]=" Calculate matrix determinant                  ";
	m[7]=" Multiply matrices by scalar                   ";
	m[8]=" Divide matrices by scalar                     ";
	m[9]=" Set a row of the matrix to a certain value    ";
	m[10]=" Set a column of the matrix to a certain value ";
	m[11]=" Compare two matrices                          ";
	m[12]=" Exit                                          ";
	
	char res;
	int cr;

	do
	{
		color('m','b');
		system("cls");
	
	
		color('m','f');
		pos(15,4);	cout<<m[1]<<endl;
		color('f','m');
		pos(15,5);	cout<<m[2]<<endl;
		pos(15,6);	cout<<m[3]<<endl;
		pos(15,7);	cout<<m[4]<<endl;
		pos(15,8);	cout<<m[5]<<endl;
		pos(15,9);	cout<<m[6]<<endl;
		pos(15,10);	cout<<m[7]<<endl;
		pos(15,11);	cout<<m[8]<<endl;
		pos(15,12);	cout<<m[9]<<endl;
		pos(15,13);	cout<<m[10]<<endl;
		pos(15,14);	cout<<m[11]<<endl;
		pos(15,15);	cout<<m[12]<<endl;
		pos(15,16);	cout<<endl<<endl;
		i=1;
		
		while(1)
		{cin>>cr;
			switch(cr)
			{
				case 80:
					if(i<12)
					{
						color('f','m');pos(15,3+i); cout<<m[i]<<endl;
						color('m','f');pos(15,3+i+1);cout<<m[i+1]<<endl;
						i=i+1;
					}
					else
					{
						color('f','m');pos(15,3+i); cout<<m[i]<<endl;
						color('m','f');pos(15,3+1);cout<<m[1]<<endl;
						i=1;
					}
				break;
				
				case 72:
					if(i>1)
					{
					color('f','m');pos(15,3+i); cout<<m[i]<<endl;
					color('m','f');pos(15,3+i-1);cout<<m[i-1]<<endl;
					i=i-1;
					}
					else
						{
					color('f','m');pos(15,3+i); cout<<m[i]<<endl;
					color('m','f');pos(15,15);cout<<m[12]<<endl;
					i=12;
					}
				break;
				
				case 13:
					color('h','n');
					system("cls");
					switch(i)
					{
						case 1: add();break;
						case 2: subtract();break;
						case 3: multiplication ();break;
						case 4: transpos();break;
						case 5: inverse();break;
						case 6: determinent();break;
						case 7: scalar_ultiply();break;
						case 8: scalar_divide();break;
						case 9: Set_row_value();break;
						case 10: Set_column_value();break;
						case 11: Compare_two_matrices();break;
						case 12:exit(0);
								
					}
					goto mm;
					break;
			}
		}
		
        mm:
		cout<<endl;
		cout<<"continue(y/n)";cin>>res;
	}while(res=='y');
}

void add()
{  
	cout<<"Enter the number of rows of matrix: ";cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **first  = new float*[m];
	float **second  = new float*[m];
	for(i=0;i<m;i++)
	{
		first[i] = new float[n];
		second[i] = new float[n];
	}

   cout<<"\nEnter the elements of first matrix\n";
    for ( i = 0 ; i < m ; i++ )
	{		
      for ( j = 0 ; j < n ; j++ )
	  {
         cin>>first[i][j];
	  }
	}
   cout<<"\nEnter the elements of second matrix\n";
    for ( i = 0 ; i < m ; i++ )
	{
		for ( j = 0 ; j < n ; j++ )
		{
            cin>>second[i][j];
		}
	}
 system("cls");
    cout<<"\nfirst entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<first[i][j]<<"\t";
       cout<<"\n";
   }
	cout<<"\nsecond entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<second[i][j]<<"\t";
       cout<<"\n";
   }
   cout<<"\nSum of entered matrices:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<< first[i][j] + second[i][j]<<"\t";
       cout<<"\n";
   }
 
}
 
void subtract()
{   
	cout<<"Enter the number of rows of matrix: ";cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **first  = new float*[m];
	float **second  = new float*[m];
	for(i=0;i<m;i++)
	{
		first[i] = new float[n];
		second[i] = new float[n];
	}
   cout<<"\nEnter the elements of first matrix\n";
    for ( i = 0 ; i < m ; i++ )
	{		
      for ( j = 0 ; j < n ; j++ )
	  {
         cin>>first[i][j];
	  }
	}
   cout<<"\nEnter the elements of second matrix\n";
    for ( i = 0 ; i < m ; i++ )
	{
		for ( j = 0 ; j < n ; j++ )
		{
            cin>>second[i][j];
		}
	}
 system("cls");
    cout<<"\nfirst entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<first[i][j]<<"\t";
       cout<<"\n";
   }
	cout<<"\nsecond entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<second[i][j]<<"\t";
       cout<<"\n";
   }
   cout<<"\nsubtraction of entered matrices:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<< first[i][j] - second[i][j]<<"\t";
       cout<<"\n";
   }
 }

void multiplication ()
{   	cout<<"Enter the number of rows of first matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of first matrix: ";cin>>n;
	cout<<"\nEnter the number of rows of second matrix: "; cin>>p;
	cout<<"Enter the number of columns of second matrix: ";cin>>q;
   	
   if ( n != p )
      cout<<"Matrices with entered orders can't be multiplied with each other.\n";
   else
   {
		float **first  = new float*[m];
		for(i=0;i<m;i++)
		{
			first[i] = new float[n];
		}
		
		float **second  = new float*[p];
		for(i=0;i<p;i++)
		{		
			second[i] = new float[q];
		}
		
		cout<<"\nEnter the elements of first matrix\n";
		for ( i = 0 ; i < m ; i++ )
		{		
			for ( j = 0 ; j < n ; j++ )
			{
				cin>>first[i][j];
			}
		}
	   
		cout<<"\nEnter the elements of second matrix\n";
		for ( i = 0 ; i < p ; i++ )
		{
			for ( j = 0 ; j < q ; j++ )
			{
			  cin>>second[i][j];
			}
		}
    system("cls");
    cout<<"\nfirst entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<first[i][j]<<"\t";
       cout<<"\n";
   }
	cout<<"\nsecond entered matrix:-\n";
    for ( i = 0 ; i < p ; i++ )
   {
      for ( j = 0 ; j < q ; j++ )
         cout<<second[i][j]<<"\t";
       cout<<"\n";
   }
 float sum=0;
	cout<<"\nProduct of entered matrices:-\n";
	for ( i = 0 ; i < m ; i++ )
      {
         for ( j = 0 ; j < q ; j++ )
         {
            for ( k = 0 ; k < p ; k++ )
            {
               sum = sum + first[i][k]*second[k][j];
            }
             cout<<sum<<"\t";
             sum = 0;
         }
		 cout<<"\n";
      }
    }
 }


void transpos()
{   
   cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **matrix  = new float*[m];
		for(i=0;i<m;i++)
		{
			matrix[i] = new float[n];
		}
   cout<<"\nEnter the elements of first matrix\n";
    for ( i = 0 ; i < m ; i++ )
	{		
      for ( j = 0 ; j < n ; j++ )
	  {
         cin>>matrix[i][j];
	  }
	}

	system("cls");
    cout<<"\n entered matrix:-\n";
    for ( i = 0 ; i < m ; i++ )
   {
      for ( j = 0 ; j < n ; j++ )
         cout<<matrix[i][j]<<"\t";
       cout<<"\n";
   }
cout<<"\nTranspose of entered matrix :-\n";
   for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {
        cout<<matrix[j][i]<<"\t";
		}
	  cout<<"\n";
   }
 }

void inverse ()
{	cout<<"enter the order of the matrix: ";cin>>k;
	float **matrix = new float*[k];
	float **inversion = new float*[k];
	float **b= new float*[k];
	float **fac= new float*[k];
		for(i=0;i<k;i++)
		{
			matrix[i] = new float[k];
			inversion[i] = new float[k];
			b[i] = new float[k];
			fac[i] = new float[k];
		}
	cout<<"enter the element of matrix:\n";
	for ( i = 0;i < k;i++ )
	{
		for ( j = 0;j < k;j++ )
		{
			cin>>matrix[i][j];
		}
	}
	system("cls");
    cout<<"\n entered matrix:-\n";
    for ( i = 0 ; i < k ; i++ )
   {
      for ( j = 0 ; j < k ; j++ )
         cout<<matrix[i][j]<<"\t";
       cout<<"\n";
   }
	float d = detrm(matrix, k );
	cout<<"\nTHE DETERMINANT IS= "<< d;
	if ( d == 0 )
		cout<< "\nMATRIX IS NOT INVERSIBLE\n" ;
	else
	//FIND COFACTOR
	{
	for ( q = 0;q < k;q++ )
	{
		for ( p = 0;p < k;p++ )
		{
			m = 0;
			n = 0;
			for ( i = 0;i < k;i++ )
			{
				for ( j = 0;j < k;j++ )
				{
					b[ i ][ j ] = 0;
					if ( i != q && j != p )
					{
						b[ m ][ n ] = matrix[ i ][ j ];
						if ( n < ( k - 2 ) )
							n++;
						else
						{
							n = 0;
							m++;
						}
					}
				}
			}
			fac[ q ][ p ] = pow( -1.0, (q + p) ) * detrm( b, k - 1 );
		}
	}
	//FIND TRANSPOSE  

	for ( i = 0;i < k;i++ )
	{
		for ( j = 0;j < k;j++ )
		{
			b[ i ][ j ] = fac[ j ][ i ];
		}
	}
	//FIND INVERSE 
	d = detrm( matrix, k );
	inversion[ i ][ j ] = 0;
	for ( i = 0;i < k;i++ )
	{
		for ( j = 0;j < k;j++ )
		{
			inversion[ i ][ j ] = b[ i ][ j ] / d;
		}
	}


	
	cout<<"\nTHE INVERSE OF THE MATRIX:\n";
	for ( i = 0;i < k;i++ )
	{
		for ( j = 0;j < k;j++ )
		{    
			cout<<setw(8)<<inversion[ i ][ j ]<<"\t";
		}
		cout<<( "\n" );
	}
	}
}

float detrm( float **matrix, int k )
{float **b  = new float*[k];
		for(i=0;i<k;i++)
		{
			b[i] = new float[k];
		}
	float s = 1, det = 0;
	int i, j, m, n, c;
	if ( k == 1 )
	{
		return ( matrix[ 0 ][ 0 ] );
	}
	else
	{
		det = 0;
		for ( c = 0;c < k;c++ )
		{
			m = 0;
			n = 0;
			for ( i = 0;i < k;i++ )
			{
				for ( j = 0;j < k;j++ )
				{
					b[ i ][ j ] = 0;
					if ( i != 0 && j != c )
					{
						b[ m ][ n ] = matrix[ i ][ j ];
						if ( n < ( k - 2 ) )
							n++;
						else
						{
							n = 0;
							m++;
						}
					}
				}
			}
			det = det + s * ( matrix[ 0 ][ c ] * detrm( b, k - 1 ) );
			s = -1 * s;
		}
		}
	return ( det );
}


void determinent()
{   	cout<<( "ENTER THE ORDER OF THE MATRIX:\n" );cin>>k;
	float **matrix = new float*[k];
	for(i=0;i<k;i++)
		{
			matrix[i] = new float[k];
			
		}
	cout<<( "ENTER THE ELEMENTS OF THE MATRIX:\n" );
	for ( i = 0;i < k;i++ )
	{
		for ( j = 0;j < k;j++ )
		{
			cin>>matrix[ i ][ j ];
		}
	}
	for ( i = 0;i < k;i++ )
	{cout<<"\n";
		for ( j = 0;j < k;j++ )
		{
			cout<<matrix[ i ][ j ]<<"\t";
		}
	}
	cout<<"\nTHE DETERMINANT IS= "<<detrm( matrix, k ) ;
 }

void scalar_ultiply()
{   cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **matrix  = new float*[m];
		for(i=0;i<m;i++)
		{
			matrix[i] = new float[n];
		}
   cout<<"Enter the elements of matrix \n";
    for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {  
         cin>>matrix[i][j];
      }
   }
	float z;
 cout<<"\nEnter the scalar value \n";cin>>z;

   for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {
         matrix[i][j] = matrix[i][j]*z;
      }
   }
 
   cout<<"matrix after multiplication :-\n";
    for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {   
         cout<<matrix[i][j]<<"\t";
      }  
      cout<<"\n";
   }
}
void scalar_divide()
{   
cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **matrix  = new float*[m];
		for(i=0;i<m;i++)
		{
			matrix[i] = new float[n];
		}   
   cout<<"Enter the elements of matrix \n";
    for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {   
         cin>>matrix[i][j];
      }
   }
	float z;
 cout<<"\nEnter the scalar value (!=0) \n";cin>>z;

   for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {
         matrix[i][j] = matrix[i][j]/z;
      }
   }
 
   cout<<"matrix after division :-\n";
    for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {   
         cout<<matrix[i][j]<<"\t";
      }  
      cout<<"\n";
   }
}
void Set_row_value()
{   float z; int r;
cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **matrix  = new float*[m];
		for(i=0;i<m;i++)
		{
			matrix[i] = new float[n];
		}   
   cout<<"Enter the elements of matrix \n";
    for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {  
         cin>>matrix[i][j];
      }
   }
	
 cout<<"\nEnter the  value \n";cin>>z;
 cout<<"\nEnter row number \n";cin>>r;
      
      for( j = 0 ; j < n ; j++ )
      {
         matrix[r-1][j] = z;
      }
   
 
   cout<<"matrix after replacement :-\n";
    for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {   
         cout<<matrix[i][j]<<"\t";
      }  
      cout<<"\n";
   }
}
void Set_column_value()
{   float z; int r;

cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
	float **matrix  = new float*[m];
		for(i=0;i<m;i++)
		{
			matrix[i] = new float[n];
		}   
   cout<<"Enter the elements of matrix \n";
    for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {   
         cin>>matrix[i][j];
      }
   }
	
 cout<<"\nEnter the  value \n";cin>>z;
 cout<<"\nEnter column number \n";cin>>r;
      
      for( j = 0 ; j < n ; j++ )
      {
         matrix[j][r-1] = z;
      }
   
 
   cout<<"matrix after replacement :-\n";
    for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {  
         cout<<matrix[i][j]<<"\t";
      }  
      cout<<"\n";
   }
}
void Compare_two_matrices()
{   cout<<"Enter the number of rows of matrix: ";   cin>>m;
   	cout<<"Enter the number of columns of matrix: ";cin>>n;
		float **first  = new float*[m];
		float **second  = new float*[m];

		for(i=0;i<m;i++)
		{
			first[i] = new float[n];
			second[i] = new float[n];
		}
   cout<<"Enter the elements of first matrix\n";
    for ( i = 0 ; i < m ; i++ )
      for ( j = 0 ; j < n ; j++ )
		  
         cin>>first[i][j];
 
   cout<<"Enter the elements of second matrix\n";
    for ( i = 0 ; i < m ; i++ )
      for ( j = 0 ; j < n ; j++ )
		  cin>>second[i][j];

 int count=0;
   for ( i = 0 ; i < m ; i++ )
      for ( j = 0 ; j < n ; j++ )
         if(first[i][j]!= second[i][j])count=count+1;
 
   if (count==0)
	 {  
	   cout<<"two matrices are equivalent"<<endl;
   }
   else
	cout<<"two matrices are not equivalent"<<endl;
}