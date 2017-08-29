#include<iostream>

using namespace std;

struct pilha{
	int base,topo;
};

struct fila{
	int primeiro,ultimo;
};



int main(){
	pilha p;
	fila q;
	int i,opcao=0,newValor,opcao2,n;
	
	
	cout<<"\nInsira a quantidade de termos que deseja no vetor:";
	cin>>n;
	int v[n-1];
	
	//inicializaPilhaEFila;
	p.topo=n;
	p.base=n-1;
	q.primeiro=-1;
	q.ultimo=-1;
	//----------------------
	
	//somente para deixar esteticamente melhor, o vetor ser� totalmente preenchido com zeros, onde o zero significa que o espa�o est� VAZIO;
	for(i=0;i<=n-1;i++){
		v[i]=0;
	}
	
	do{
		
	   cout<<"\n--Vetor--";
	   cout<<"\n1=Inserir";
	   cout<<"\n2=Remover";
	   cout<<"\n3=Imprimir";
	   cout<<"\n4=Sair";
	   cout<<"\nOpcao:";
	   cin>>opcao;
	   
        if(opcao==1){
      			   
					 if(q.ultimo+1!=p.topo){
	   
		              cout<<"\n1=Inserir FILA";
	                  cout<<"\n2=Inserir PILHA";
	                  cout<<"\nOpcao:";
	                  cin>>opcao2;
	                  cout<<"\nInforme o valor:";
                      cin>>newValor;
	   
	                  if(opcao2==1){
	                  	
	  	 	                if(q.primeiro==-1){
	   			                      q.primeiro++;
   			                   }
        		                q.ultimo++;
	                            v[q.ultimo]=newValor;	    
	                  }	
	   
	                   else{
	   			            p.topo--;
   				            v[p.topo]=newValor;
	                   }
	  	
	                 }
	   
	                else{
	   	                cout<<"\nOverflow\n";
	                }
	   			
        }
	   
	    if(opcao==2){
	   	  
          cout<<"\n--Remocao--";
	   	  cout<<"\n1=FILA";
	   	  cout<<"\n2=PILHA";
	   	  cout<<"\nOpcao:";
	   	  cin>>opcao2;

		  if(opcao2==1){
			  //S� ir� remover da fila se o �ltimo elemento estiver acima OU no �ndice inicial do vetor;
			  if(q.ultimo>=0){
				 i=q.primeiro+1;
				 //fun��o desloca, onde o elementos ser�o deslocados para o in�cio quando o in�cio for removido;
				 while(i<=q.ultimo){
					 v[i-1]=v[i];
					 i++;
				 }
				 v[q.ultimo]=0;
			     q.ultimo=q.ultimo-1;
			     //fim_funcao;
					
			  }
			  
			  //Mensagem exibida quando a fila est� vazia;
			  else{
				cout<<"\nUnderflow\n";
			  } 
			
		  }
		
		  else{
			
			 if(opcao2==2){
			 	//S� ir� remover o elemento do vetor se o topo da pilha estiver "dentro" do vetor;
				  if(p.topo<n){
					v[p.topo]=0;
					p.topo++;
				  }
				  //Sen�o, ele exibe o UNDERFLOW na tela; 
				  else{
					cout<<"\nUnderflow\n";
				  }
				  
			 }
		
		  }
	   	
	    }
	   
	     if(opcao==3){
	   	 //Impress�o dos valores inseridos no vetor;
	   	  cout<<"\nVetor:";
	   	  for(newValor=0;newValor<=n-1;newValor++){
	   	    	cout<<v[newValor]<<"  ";
	   	     }
	    	cout<<"\n";
	   	
	     }



	}while(opcao!=4);
	



}
	

