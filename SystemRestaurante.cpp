#include<iostream>
#include<ctime>                //  Para rodar no PC com data e hora 
#include<string.h>
using namespace std;



void AuthorDetails(){
   cout <<"-------------------------------------------------------------------\n";
   cout <<"             ***  Projeto : Sistema de compra de itens  ***\n";
   cout <<"-------------------------------------------------------------------\n";
   
   cout <<"                 Author  - [ github - saulohenriqueaguiar ]\n";
   cout <<"                 Gmail   - shna@gmail.com\n";   
   cout <<"                 Created - 08/01/2024\n";
   cout <<"                 Program - Dev-C++\n";
  
      
   cout <<"*******************************************************************\n";
}

//*************************************************************************************************************

void space1()              
	{
   		 cout << endl;  
	}

void space2()             
	{
    	cout << endl; 
    	cout << endl; 
	}

void Title_n_Time()
	{
		time_t t;                  // argumento função time
		struct tm*tt;              // declaração variaveis locais
		time (&t);                 
		tt = localtime(&t);
		system("cls");
		AuthorDetails();
		space2();
		cout<<""<<endl;		// title
		cout<<"**** data e hora atual : "<<asctime(tt);											
	}
	
	   // Menu array
		string Menu [1][4]={{"Código do Item","Tipo de Suco","Preço R$.","Compra 5 pega 10% desconto"}};    
		string list1[1][4]={{"1","Macã","120/=","Não"}};
		string list2[1][4]={{"2","Laranja","100/=","Sim"}};
		string list3[1][4]={{"3","Manga","90 /=","Sim"}};
		string list4[1][4]={{"4","Uva","130/=","Não"}};
		string list5[1][4]={{"5","Morango","140/=","Sim"}};		

void MenuList()
	{
		cout <<" ------------------------- * LISTA MENU * --------------------------      "<<endl;
		cout<<" | ["<<Menu[0][0]<<"]   ["<<Menu[0][1]<<"]    ["<<Menu[0][2]<<"]  ["<<Menu[0][3]<<"] |"<<endl;
		cout<<" |     [" <<list1[0][0]<< "]        [ "<<list1[0][1]<<"  ]       ["<<list1[0][2]<<"]            ["<<list1[0][3]<<"]        |"<<endl;
		cout<<" |     [" <<list2[0][0]<< "]        [ "<<list2[0][1]<<" ]       ["<<list2[0][2]<<"]            ["<<list2[0][3]<<"]       |"<<endl;
		cout<<" |     [" <<list3[0][0]<< "]        [ "<<list3[0][1]<<"  ]       ["<<list3[0][2]<<"]            ["<<list3[0][3]<<"]       |"<<endl;
		cout<<" |     [" <<list4[0][0]<< "]        [ "<<list4[0][1]<<"  ]       ["<<list4[0][2]<<"]            ["<<list4[0][3]<<"]        |"<<endl;
		cout<<" |     [" <<list5[0][0]<< "]        [ "<<list5[0][1]<<"]       ["<<list5[0][2]<<"]            ["<<list5[0][3]<<"]       |"<<endl;
	}
	
void text1()
	{
		cout<<"Bem-vindo ao login do Sistema de Gerenciamento de Estoque: "<<endl;
		space1();
		cout<<" You have 3 login atempts.."<<endl;
	}

/*******************************************************************************************************************************/


int main()
{
LOGOUT:		        // goto SAIR; linha de ligação: 539
welcome:
	
	Title_n_Time();
	
space2();			// call space 
	
	cout<<"------ SISTEMA DE VERIFICAÇÃO --------"<<endl;
	cout<<" *Acesso? (y:sim / n:sair):: ";
	
		char login;           
		cin>>login;		
		if (login=='y') 
			{  goto LOGIN; }	
		if (login=='n')
			{ space1();  cout<<"  >>> SAIR.";	return 0;	}
		else
			{ goto welcome;}
					
	
	LOGIN:		
			
	double b1[5][3]={{001,120,0},{002,100,0.10},{003,90,0.10},{004,130,0},{005,140,0.10}};   
	Title_n_Time();		   // chamar função
	space2();
	text1();
	
	string username;       // declarar  
	string password;
	string name;
	string name0;
	
	int n = 2;
		
	START:             // goto Início; link line: 165
		while (n>=0)   // Instrução de loop 3 vezes 
		{	
			space1();
			cout<<" Enter Usuário : ";
			cin>>username;
			cout<<" Enter Senha : ";
			cin>>password;
			
			if (username == "Certis" && password == "admin@sys")
			{
				space1();
				name = ("Sr. Saulo Henrique");
				name0 = ("Gerente no Restaurante");
				space1();
				goto END;
			}
			else if (username == "Mich_Dess" && password == "Mich_458")
			{
				space1();
				name = ("Sr. Henrique Aguiar");
				name0 = ("Caixa de Restaurante");
				space1();
				goto END;
			}
			else if (username == "admin" && password == "123")
			{
				space1();
				 name = ("Sr. Henrique Nascimento");
				 name0 = ("Administrador de Sistema de Restaurante");
				space1();
				goto END;
			}
			else if(n==0)
			{
				system("cls");
				Title_n_Time();
				space2();
				cout<<"!!! DESCULPE.. Máximo de tentativas atingido. ! SISTEMA BLOQUEADO! ***"<<endl;
				space1();
				cout<<">>> EXIT. ";
				return 0;
			}
			else
			{	
				system("cls");
				Title_n_Time();
				space2();														
				cout<<" Nome de usuário/senha incorretos, você tem "<<n<<" tentativas restantes"<<endl;
				n=n-1;
				goto START;
			}
		}
		
	options:       // goto options; link line: 349, 526
	END:           // goto END;    link line: 130, 138, 146
	
		system("cls");
		STARTe:    // goto STARTe; link line: 211,540,546

		Title_n_Time();
		
		space1();
		cout<<"**** Bem-Vindo "<<name0<<" : "<<name<<endl;	
		space1();
		
		cout<<" [[ Por Favor Selecione uma Opção ]] "<<endl;
		cout<<"** Pressione (m) Para Detalhes de Menu  **"<<endl;
		cout<<"** Pressione (b) Para CONTA **"<<endl;
		cout<<"** Pressione (e) Para Sair **"<<endl;
		space1();
		
		char input;	char button;
		cout<<"Opção de Entrada : ";
		cin>>input;
		space1();
		
		switch (input)       // Menu by user input 
		{
			case 'm':
			{
				system("cls");
				
				Title_n_Time();
				
				space1();
				cout<<"**** Bem-Vindo "<<name0<<" : "<<name<<endl;
				space2();
				
				MenuList();			
				
				space1();
				cout<<"Pressione 'Alguma Tecla' opção de voltar :: ";
				char e;
				cin>>e;
				system("cls");
				goto STARTe;
			}
			break;
			
			case 'b':
			{ 
			STARTb1:   // goto STARTb1; link line: 511
				int qty1=0,qty2=0,qty3=0,qty4=0,qty5=0,qtyA=0,qtyB=0,qtyC=0,qtyD=0,qtyE=0;
				double gross1=0,gross2=0,gross3=0,gross4=0,gross5=0,offer2=0,offer3=0,offer5=0,net=0;
				
			ST2:       // goto ST2; link line: 259,280,301,321,342

				Title_n_Time();
				
				space1();
				cout<<"**** Bem-Vindo "<<name0<<" : "<<name<<endl;
				space1();
					
				MenuList();		 
				
				space2();
				
				
				cout <<" ------- Calcular Conta -------"<<endl;
				cout<<"Selecione o item desejado / Digite '0' para cancelar, volte."<<endl;
				OPTb:        // goto OPTb; link line: 353
				
				char code;	
				space1();	
				cout<<"Codigo do Item : ";
				cin>>code;
				
					switch(code)      // seleção do item da calculadora de faturas por entrada do usuário
						{	
						case '1':
								space1();
								cout<<"Suco de maçã selecionado"<<endl;
								cout<<"Quantidade : ";
								cin>>qty1;
								qtyA+=qty1;                // Qunatity adds to previous quantity incase of same item selction again
								gross1+=b1[0][1]*qty1;     // Multiplying Quantity with item price
								space1();
								cout<<"Você quer outra bebida? Pressione (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}		
							
						case '2':
								space1();
								cout<<"Suco de Laranja Selecionado"<<endl;
								cout<<"Quantity : ";
								cin>>qty2;
								qtyB+=qty2;
								gross2+=b1[1][1]*qty2;       // Multiplying Quantity with item price
								space1();
								cout<<"Voce deseja outro drink? Pressione (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");									
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}		
							
						case '3':
								space1();
								cout<<"Suco de Manga Selecionado"<<endl;
								cout<<"Quantidade : ";
								cin>>qty3;
								qtyC+=qty3;
								gross3+=b1[2][1]*qty3;
								space1();
								cout<<"Você deseja outro drink? Pressione (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
							
						case '4':
								space1();
								cout<<"Suco de Uva Selecionado"<<endl;
								cout<<"Quantidade : ";
								cin>>qty4;
								qtyD+=qty4;
								gross4+=b1[3][1]*qty4;
								space1();
								cout<<"Você quer outra bebida? Pressione (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
							
						case '5':
								space1();
								cout<<"Suco de Abacate Selecionado"<<endl;
								cout<<"Quantidade : ";
								cin>>qty5;
								qtyE+=qty5;
								gross5+=b1[4][1]*qty5;
								space1();
								cout<<"Você quer outra bebida? Imprensa (y/n) : ";
								cin>>button;
								if(button=='y')
									{
									system("cls");
									Title_n_Time();
									goto ST2;
									}
								else if(button=='n')
									{
									goto p;
									}
						case '0':
								goto options;
							
						default:      // any other key press 
								cout<<"Erro! Verifique o código do item"<<endl; 
								goto OPTb;  
						}
						p:           // goto p; link line: 263,284,305,325,346
						
						offer2=(gross2-(gross2*(b1[1][2])));     // Calculating offers
						offer3=(gross3-(gross3*(b1[2][2])));
						offer5=(gross5-(gross5*(b1[4][2])));
						
					if (qty2>=5 && qty3>=5 && qty5>=5)           // Checks customer choice of input to display right bill
						{
							net=gross1+gross4+offer2+offer3+offer5;
							goto netx;
						}
						else  if (qty2<=4 && qty3<=4 && qty5<=4)
						{
							net=gross1+gross2+gross3+gross4+gross5;
							goto netx;
						}
						else if (qty2>=5 && qty3>=5 && qty5<=4)    
						{
							net=gross1+gross4+offer2+offer3+gross5;
							goto netx;
						}
						else  if (qty2>=5 && qty5>=5 && qty3<=4)
						{
							net=gross1+gross4+offer2+gross3+offer5;
							goto netx;
						}	
						else  if (qty5>=5 && qty3>=5 && qty2<=4)
						{
							net=gross1+gross4+gross2+offer3+offer5;
							goto netx;
						}
						else  if (qty5>=5 && qty3<=4 && qty2<=4)
						{
							net=gross1+gross4+gross2+gross3+offer5;
							goto netx;
						} 
						else  if (qty3>=5 && qty5<=4 && qty2<=4)
						{
							net=gross1+gross4+gross2+offer3+gross5;
							goto netx;
						}
						else  if (qty2>=5 && qty5<=4 && qty3<=4)
						{
							net=gross1+gross4+offer2+gross3+gross5;
							goto netx;
						}   			
					netx:              // goto netx; link line: 365,369,374,379,385,389,394,399
					system("cls");
					Title_n_Time();
									
					space1();
					cout<<"**** Itens comprados de "<<name0<<" : "<<name<<endl;
					space1();
					
					cout<<"          ---- *CONFIRA A LISTA* ---- "<<endl;
					string bill [1][6]={"Tipo de suco","Preço R$.","Qty","Quantia","Disco. 10%"};
					cout<<"|"<<bill[0][0]<<"| |"<<bill[0][1]<<"| |"<<bill[0][2]<<"| |"<<bill[0][3]<<"| |"<<bill[0][4]<<"|"<<endl;
					
					if (qty2>4 && qty3>4 && qty5>4)   
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;
					goto check;	
					}
					if ((qty5<=4 || qty3<=4) && (qty2>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty5<=4 || qty2<=4) && (qty3>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2<=4 || qty3<=4) && (qty5>=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2>4 || qty3>4) && (qty5<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2>4 || qty5>4) && (qty3<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<offer2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty5>4 || qty3>4) && (qty2<=4))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<offer3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<offer5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					if ((qty2<5 && qty3<5 && qty5<5) || (qty2<5 || qty3<5 || qty5<5))
						{
						cout<<"   "<<list1[0][1]<<"         "<<b1[0][1]<<"       "<<qtyA<<"     "<<gross1<<"       "<<b1[0][2]<<endl;
						cout<<"   "<<list2[0][1]<<"        "<<b1[1][1]<<"       "<<qtyB<<"     "<<gross2<<"       "<<b1[1][2]<<endl;
						cout<<"   "<<list3[0][1]<<"         "<<b1[2][1]<<"        "<<qtyC<<"     "<<gross3<<"       "<<b1[2][2]<<endl;
						cout<<"   "<<list4[0][1]<<"         "<<b1[3][1]<<"       "<<qtyD<<"     "<<gross4<<"         "<<b1[3][2]<<endl;
						cout<<"   "<<list5[0][1]<<"       "<<b1[4][1]<<"       "<<qtyE<<"     "<<gross5<<"         "<<b1[4][2]<<endl;	
					goto check;	
					}
					check:	       // goto check; link line: 420,429,438,447,456,465,474,483
					space1();	
					cout<<"Quantia Total : R$."<<net<<"/="<<endl;
					space1();	
					
					int pay,Q;
					Q=0;
					u:                 // goto u; link line: 514
					pay=0; 
					space1();
					cout<<"Valor do Pagamento em Dinheiro :: ";
					cin>>pay;         
					Q+=pay;
					space1();
					if(Q>=net)         
					{
					cout<<"Valor Pago : "<<Q<<" Rs."<<endl;
					space1();	
					cout<<"Balanço :: "<<Q-net<<"/= Rs."<<endl;
					space1();
					cout<<">>> Obrigado! Para sua compra.."<<endl;
				goto out;
					}
					else if(Q<net)     // If payed mount not enough
					{
					space1();
					cout<<"Pagamento insuficiente."<<endl;
					cout<<"Pago : "<<Q<<"/="<<endl;
					cout<<"Por favor, pague mais : "<<net-Q<<"/="<<endl;
					goto u;
					}
				out:   // goto out; link line: 506
				space2();	
	   			cout<<"Pressione 'm', Opção principal de retorno.."<<endl;
				cout<<"Pressione 'b', Outra compra.."<<endl;
				cout<<"Pressione 'Zero', Exit.."<<endl; 	space1();
			out1:	cout<<"            Pressione :: ";                    // goto out1; link line: 529
				char press;
				cin>> press;
						switch (press)
						{	
						case 'm' : {goto options;}   // Após o pagamento ser feito perguntando o que fazer
						case 'b' : {goto STARTb1;}
						case '0' : {goto exit;}
						default  : {goto out1;} 
					    }
			}
			break;	
			case 'e':
			{	ee:  system("cls");	                // goto ee; link line: 541
			   space1();
				cout<<">> LOGOUT | Tem certeza? (y/n) :: ";
				char press;
				cin>>press;
				if (press=='y') {	system("cls");	goto LOGOUT; }
				else if(press=='n') { system("cls");  goto STARTe;}		
				 goto ee;
			}
			default: system("cls");
					cout<<"Desculpe, não consegui considerar. Tente novamente!"<<endl;
					space1();
					goto STARTe;
		}
		exit: // goto exit; link line: 528
		cout<<">>> Exited."<<endl;
}

