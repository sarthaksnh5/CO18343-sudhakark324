#include<iostream>

using namespace std;

int main(){
	string ques[15] = { "Grand Central Terminal, Park Avenue, New York is the world's: \n  1. Largest railway station \n 2. Highest railway station \n 3. Longest railway station \n 4. None of the above \n", 
						"Entomology is the science that studies: \n 1. Behavior of human beings \n 2. Insects \n 3. The origin and history of technical and scientific terms \n  4.The formation of rocks \n", 
						"Eritrea, which became the 182nd member of the UN in 1993, is in the continent of: \n 1. Asia \n 2. Africa \n 3. Europe \n 4. Australia \n " ,
						"Garampani sanctuary is located at: \n 1. Junagarh, Gujarat \n 2. Diphu, Assam \n 3. Kohima, Nagaland \n 4. Gangtok, Sikkim \n", 
						"For which of the following disciplines is Nobel Prize awarded: \n 1. Physics and Chemistry \n 2. Physiology or Medicine \n 3. Literature, Peace and Economics \n 4. All of the above \n",
						"Hitler party which came into power in 1933 is known as: \n 1. Labour Party \n 2. Nazi Party \n 3. Ku-Klux-Klan \n 4. Democratic Party \n",
						"FFC stands for:  \n 1. Foreign Finance Corporation \n 2. Film Finance Corporation \n 3. Federation of Football Council \n 4. None of the above \n",
						"Fastest shorthand writer was: \n 1. Dr. G. D. Bist \n 2. J.R.D. Tata \n 3. J.M. Tagore \n 4. Khudada Khan \n",
						"Epsom (England) is the place associated with: \n 1. Horse racing \n 2. Polo \n 3. Shooting \n 4. Snooker \n",
						"First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in \n 1. 1967 \n 2. 1968 \n 3. 1958 \n 4. 1922 \n",
						"Galileo was an Italian astronomer who: \n 1. developed the telescope \n 2. discovered four satellites of Jupiter \n 3. discovered that the movement of pendulum produces a regular time measurement \n 4. All of the above \n",
						"Habeas Corpus Act 1679:  \n 1. states that no one was to be imprisoned without a writ or warrant stating the charge against him \n 2. provided facilities to a prisoner to obtain either speedy trial or release in bail \n 3. safeguarded the personal liberties of the people against arbitrary imprisonment by the king's orders \n 4. All of the above \n",
						"Exposure to sunlight helps a person improve his health because:  \n 1. the infrared light kills bacteria in the body \n 2. resistance power increases \n 3. the pigment cells in the skin get stimulated and produce a healthy tan \n 4. the ultraviolet rays convert skin oil into Vitamin D \n",
						"Golf player Vijay Singh belongs to which country: \n 1. USA \n 2. Fiji \n 3. India \n 4. UK \n",
						"Guarantee to an exporter that the importer of his goods will pay immediately for the goods ordered by him, is known as: \n 1. Letter of Credit (L/C) \n 2. laissezfaire \n 3. inflation \n 4. None of the above \n"
						}; //question array
	int money = 0; //your earned money
	int ans[15] = {1, 2, 2, 2, 4, 2, 2, 1, 1, 1, 4, 4, 4, 2, 1}; //answer array
	
	/*starting loop for 15 times for 15 question*/
	
	for(int i = 1; i < 15; i++){
	cout<<"Choose Number between 0 - 14"<<"\n"<<"But not the last one \n";
	
	int a;
	cin>>a;
	cout<<i<<". ";
	cout<<ques[a];
	cout<<"Enter your Anwser: ";		
	int ansu;
	cin>>ansu;
	
		if(ansu == ans[a]){
			money = money + 5000;
			cout<<"CONGRATULATION! RIGHT ANSWER";
			cout<<"\n";
			cout<<"Your current is amount is: "<<money<<"\n";
		}
		
		else{
			cout<<"SORRY! WRONG ANSWER";
			cout<<"\n";
			cout<<"Try Again Later\n";
			cout<<"Your current is amount is: "<<money;
			break;
		}	
	}
 }
