#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

// DECLARING STRUCT card
struct card{
	int number;
	string suits;
};

int main()
{  
  // SUITS
  /* const string club = "club";
  const string spade = "spade";
  const string diamond = "diamond";
  const string hearts = "hearts"; */
  
  // FACE CARDS
  const int jack = 11;
  const int queen = 12;
  const int king = 13;
  const int ace = 14;
  
  card temp, prize, chosen;
  int position;
  
  card card1, card2, card3;
  
  // INITIALIZING CARDS 
  cout<<"CARD 1"<<endl;
  cout<<"Enter which card number you want to choose: 2-10, 11 for jack, 12 for queen, 13 for king, 14 for ace"<<endl;
  cin>> card1.number;
  cout<<"Enter which suit you want to choose: club, spade, diamond, hearts (all in small)"<<endl;
  cin>>card1.suits;
  cout<<"You chose "<< card1.number<< " of "<< card1.suits<<endl<<endl;
  
  cout<<"CARD 2"<<endl;
  cout<<"Enter which card number you want to choose: 2-10, 11 for jack, 12 for queen, 13 for king, 14 for ace"<<endl;
  cin>> card2.number;
  cout<<"Enter which suit you want to choose: club, spade, diamond, hearts (all in small)"<<endl;
  cin>>card2.suits;
  cout<<"You chose "<< card2.number<< " of "<< card2.suits<<endl<<endl;
  
  cout<<"CARD 3"<<endl;
  cout<<"Enter which card number you want to choose: 2-10, 11 for jack, 12 for queen, 13 for king, 14 for ace"<<endl;
  cin>> card3.number;
  cout<<"Enter which suit you want to choose: club, spade, diamond, hearts (all in small)"<<endl;
  cin>>card3.suits;
  cout<<"You chose "<< card3.number<< " of "<< card3.suits<<endl<<endl;
  
  // SWAPPING CARDS
  cout<<"Now swapping Card 1 and Card 2"<<endl;
  temp = card1;
  card1 = card2;
  card2 = temp;
  
  cout<<"Now swapping Card 2 and Card 3"<<endl;
  temp = card2;
  card2 = card3;
  card3 = temp;
  
  cout<<"Now swapping Card 1 and Card 3"<<endl<<endl;
  temp = card1;
  card1 = card3;
  card3 = temp;
  
  // COMPUTER (GAMBLER) SELECTS A (RANDOM) CARD
  srand(time(0));
  int a = 1+ (rand()%3);
  if(a==1)
    prize = card1;
  else if (a==2)
    prize = card2;
  else
  prize = card3;
  cout<<"Now you have to find in which position is: "<<prize.number<< " of "<<prize.suits<<endl<<endl;
  
  //  PLAYER SELECTS A POSITION
  cout<<"Enter 1 for Position 1, 2 for Position 2 and 3 for Position 3"<<endl;
  cin>>position;
  if(position == 1)
    chosen = card1;
  else if (position == 2)
    chosen = card2;
  else 
    chosen = card3;
	
 // NOW CHECKING IF CHOSEN CARD MATCHES THE RESPECTIVE POSITION
 if ((chosen.number != prize.number) && (chosen.suits != prize.suits))
    {
	 cout<<"YOU LOOSE"<<endl;
	 cout<<"Position selected has: "<<chosen.number<< " of "<<chosen.suits;
     }
 else 
    cout<<"YOU WIN";
	
return 0;					  
}
