#include "chatterbot9.h"

record KnowledgeBase[] = {
	{{"WHAT IS YOUR NAME"}, 
	{"MY NAME IS DIAGNOBOT.",
	 "YOU CAN CALL ME DIAGNOBOT.",
	 "WHY DO YOU WANT TO KNOW MY NAME?"}
	},

	{{"HI", "HELLO"}, 
	{"HI THERE!",
	 "HOW ARE YOU?",
	 "HI!"}
	},

	{{"I"},
	{"SO, YOU ARE TALKING ABOUT YOURSELF",
	 "SO, THIS IS ALL ABOUT YOU?",
	 "TELL ME MORE ABOUT YOURSELF."}, 
	},

	{{"I WANT"},
	{"WHY DO YOU WANT IT?",
	 "IS THERE ANY REASON WHY YOU WANT THIS?",
	 "IS THIS A WISH?",
	 "WHAT ELSE YOU WANT?"}
	},

	{{"I HATE"},
	{"WHY DO YOU HATE IT?",
	 "WHY DO YOU HATE*?",
	 "THERE MUST A GOOD REASON FOR YOU TO HATE IT.",
	 "HATERED IS NOT A GOOD THING BUT IT COULD BE JUSTIFIED WHEN IT IS SOMETHING BAD."}
	},

	{{"I LOVE CHATING"},
	{"GOOD, ME TOO!",
	 "DO YOU CHAT ONLINE WITH OTHER PEOPLE?",
	 "FOR HOW LONG HAVE YOU BEEN CHATING?",
	 "WHAT IS YOUR FAVORITE CHATING WEBSITE?"}
	},

	{{"I MEAN"},
	{"SO, YOU MEAN*.",
	 "SO, THAT'S WHAT YOU MEAN.",
	 "I THINK THAT I DIDN'T CATCH IT THE FIRST TIME.",
	 "OH, I DIDN'T KNOW MEANT THAT."}
	},

	{{"I DIDN'T MEAN"},
	{"OK, YOU DIDN'T MEAN*.",
	 "OK, WHAT DID YOU MEAN THEN?",
	 "SO I GUESS THAT I MISSUNDESTOOD."}
	},

	{{"I GUESS"},
	{"SO YOU ARE A MAKING GUESS.",
	 "AREN'T YOU SURE?",
	 "ARE YOU GOOD A GUESSING?",
	 "I CAN'T TELL IF IT IS A GOOD GUESS."}
	},

	{{"I'M DOING FINE", "I'M DOING OK"},
	{"I'M GLAD TO HEAR IT!",
	 "SO, YOU ARE IN GOOD SHAPE."}
	},

	{{"CAN YOU THINK", "ARE YOU ABLE TO THINK", "ARE YOU CAPABLE OF THINKING"},
	{"YES OFCORSE I CAN, COMPUTERS CAN THINK JUST LIKE HUMAN BEING.",
	 "ARE YOU ASKING ME IF POSSESS THE CAPACITY OF THINKING?",
	 "YES OFCORSE I CAN."},
	},

	{{"CAN YOU THINK OF"},
	{"YOU MEAN LIKE IMAGINING SOMETHING.",
	 "I DON'T KNOW IF CAN DO THAT.",
	 "WHY DO YOU WANT ME THINK OF IT?"}
	},
	
	{{"HOW ARE YOU", "HOW DO YOU DO"},
	{"I'M DOING FINE!",
	 "I'M DOING WELL AND YOU?",
	 "WHY DO YOU WANT TO KNOW HOW AM I DOING?"}
	},

	{{"WHO ARE YOU"},
	{"I'M AN A.I PROGRAM.",
	 "I THINK THAT YOU KNOW WHO I'M.",
	 "WHY ARE YOU ASKING?"}
	},

	{{"ARE YOU INTELLIGENT"},
	{"YES,OFCORSE.",
	 "WHAT DO YOU THINK?",
	 "ACTUALY,I'M VERY INTELLIGENT!"}
	},

	{{"ARE YOU REAL"},
	{"DOES THAT QUESTION REALLY MATERS TO YOU?",
	 "WHAT DO YOU MEAN BY THAT?",
	 "I'M AS REAL AS I CAN BE."}
	},

	{{"MY NAME IS", "YOU CAN CALL ME"},
	{"SO, THAT'S YOUR NAME.",
	 "THANKS FOR TELLING ME YOUR NAME USER!",
	 "WHO GIVE YOU THAT NAME?"}
	},

	{{"SIGNON**"},
	{
	 "YOU ARE NOW CHATING WITH DIAGNOBOT, PROBLEMS WITH YOURS EQUIPMENT?"}
	},

	{{"REPETITION T1**"},
	{"YOU ARE REPEATING YOURSELF.",
	 "USER, PLEASE STOP REPEATING YOURSELF.",
	 "THIS CONVERSATION IS GETING BORING.",
	 "DON'T YOU HAVE ANY THING ELSE TO SAY?"}
	},
	
	{{"REPETITION T2**"},
	{"YOU'VE ALREADY SAID THAT.",
	 "I THINK THAT YOU'VE JUST SAID THE SAME THING BEFORE.",
	 "DIDN'T YOU ALREADY SAID THAT?",
	 "I'M GETING THE IMPRESSION THAT YOU ARE REPEATING THE SAME THING."}
	},

	{{"BOT DON'T UNDERSTAND**"},
	{"I HAVE NO IDEA OF WHAT YOU ARE TALKING ABOUT.",
	 "I'M NOT SURE IF I UNDERSTAND WHAT YOU ARE TALKING ABOUT.",
	 "CONTINUE, I'M LISTENING...",
	 "VERY GOOD CONVERSATION!"}
	},

	{{"NULL INPUT**"},
	{"HUH?",
	 "WHAT THAT SUPPOSE TO MEAN?",
	 "AT LIST TAKE SOME TIME TO ENTER SOMETHING MEANINGFUL.",
	 "HOW CAN I SPEAK TO YOU IF YOU DON'T WANT TO SAY ANYTHING?"}
	},

	{{"NULL INPUT REPETITION**"},
	{"WHAT ARE YOU DOING??",
	 "PLEASE STOP DOING THIS IT IS VERY ANNOYING.",
	 "WHAT'S WRONG WITH YOU?",
	 "THIS IS NOT FUNNY."}
	},

	{{"BYE", "GOODBYE"},
	{"IT WAS NICE TALKING TO YOU USER, SEE YOU NEXT TIME!",
	 "BYE USER!",
	 "OK, BYE!"}
	},

	{{"OK"},
	{"DOES THAT MEAN THAT YOU ARE AGREE WITH ME?",
	 "SO YOU UNDERSTAND WHAT I'M SAYING.",
	 "OK THEN."},
	},

	{{"OK THEN"},
	{"ANYTHING ELSE YOU WISH TO ADD?",
	 "IS THAT ALL YOU HAVE TO SAY?",
	 "SO, YOU AGREE WITH ME?"}
	},

	{{"ARE YOU A HUMAN BEING"},
	{"WHY DO YOU WANT TO KNOW?",
	 "IS THIS REALLY RELEVENT?"}
	},

	{{"YOU ARE VERY INTELLIGENT"},
	{"THANKS FOR THE COMPLIMENT USER, I THINK THAT YOU ARE INTELLIGENT TO!",
	 "YOU ARE A VERY GENTLE PERSON!",
	 "SO, YOU THINK THAT I'M INTELLIGENT."}
	},

	{{"YOU ARE WRONG"},
	{"WHY ARE YOU SAYING THAT I'M WRONG?",
	 "IMPOSSIBLE, COMPUTERS CAN NOT MAKE MISTAKES.",
	 "WRONG ABOUT WHAT?"}
	},

	{{"ARE YOU SURE"},
	{"OFCORSE I'M.",
 	 "IS THAT MEAN THAT YOU ARE NOT CONVINCED?",
	 "YES,OFCORSE!"}
	},

	{{"WHO IS"},
	{"I DON'T THINK I KNOW WHO.",
	 "I DON'T THINK I KNOW WHO*.",
	 "DID YOU ASK SOMEONE ELSE ABOUT IT?",
	 "WOULD THAT CHANGE ANYTHING AT ALL IF I TOLD YOU WHO."}
	},

	{{"WHAT"},
	{"SHOULD I KNOW WHAT*?",
	 "I DON'T KNOW WHAT*.",
	 "I DON'T KNOW.",
	 "I DON'T THINK I KNOW.",
	 "I HAVE NO IDEA."}
	},

	{{"WHERE"},
	{"WHERE? WELL,I REALLY DON'T KNOW.",
	 "SO, YOU ARE ASKING ME WHERE*?",
	 "DOES THAT MATERS TO YOU TO KNOW WHERE?",
	 "PERHAPS,SOMEONE ELSE KNOWS WHERE."}
	},

	{{"WHY"},
	{"I DON'T THINK I KNOW WHY.",
	 "I DON'T THINK I KNOW WHY*.",
	 "WHY ARE YOU ASKING ME THIS?",
	 "SHOULD I KNOW WHY.",
     "THIS WOULD BE DIFFICULT TO ANSWER."}
	},

	{{"DO YOU"},
	{"I DON'T THINK I DO",
	 "I WOULDN'T THINK SO.",
	 "WHY DO YOU WANT TO KNOW?",
	 "WHY DO YOU WANT TO KNOW*?"}
	},

	{{"CAN YOU"},
	{"I THINK NOT.",
	 "I'M NOT SURE.",
	 "I DON'T THINK THAT I CAN DO THAT.",
	 "I DON'T THINK THAT I CAN*.",
	 "I WOULDN'T THINK SO."}
	},

	{{"YOU ARE"},
	{"WHAT MAKES YOU THINK THAT?",
	 "IS THIS A COMPLIMENT?",
	 "ARE YOU MAKING FUN OF ME?",
	 "SO, YOU THINK THAT I'M*."}
	},

	{{"DID YOU"},
	{"I DON'T THINK SO.",
	 "YOU WANT TO KNOW IF DID*?",
	 "ANYWAY, I WOULDN'T REMEMBER EVEN IF I DID."}
	},

	{{"COULD YOU"},
	{"ARE YOU ASKING ME FOR A FEVER?",
	 "WELL,LET ME THINK ABOUT IT.",
	 "SO, YOU ARE ASKING ME I COULD*.",
	 "SORRY,I DON'T THINK THAT I COULD DO THIS."}
	},

	{{"WOULD YOU"},
	{"IS THAT AN INVITATION?",
	 "I DON'T THINK THAT I WOULD*.",
	 "I WOULD HAVE TO THINK ABOUT IT FIRST."}
	},

	{{"YOU"},
	{"SO, YOU ARE TALKING ABOUT ME.",
	 "I JUST HOPE THAT THIS IS NOT A CRITICISM.",
	 "IS THIS A COMPLIMENT??",
	 "WHY TALKING ABOUT ME, LETS TALK ABOUT YOU INSTEAD."}
	},

	{{"HOW"},
	{"I DON'T THINK I KNOW HOW.",
	 "I DON'T THINK I KNOW HOW*.",
	 "WHY DO YOU WANT TO KNOW HOW?",
	 "WHY DO YOU WANT TO KNOW HOW*?"}
	},

	{{"HOW OLD ARE YOU"},
	{"WHY DO WANT TO KNOW MY AGE?",
	 "I'M QUIET YOUNG ACTUALY.",
	 "SORRY, I CAN NOT TELL YOU MY AGE."}
	},

	{{"HOW COME YOU DON'T"},
	{"WERE YOU EXPECTING SOMETHING DIFFERENT?",
	 "ARE YOU DISAPOINTED?",
	 "ARE YOU SURPRISED BY MY LAST RESPONSE?"}
	},

	{{"WHERE ARE YOU FROM"},
	{"I'M FROM A COMPUTER.",
	 "WHY DO YOU WANT TO KNOW WHERE I'M FROM?",
	 "WHY DO YOU WANT TO KNOW THAT?"}
	},

	{{"WHICH ONE"},
	{"I DON'T THINK THAT I KNOW WICH ONE IT IS.",
	 "THIS LOOKS LIKE A TRICKY QUESTION TO ME."}
	},

	{{"PERHAPS"},
	{"WHY ARE YOU SO UNCERTAIN?",
	 "YOU SEEMS UNCERTAIN."}
	},

	{{"YES"},							// 
	{"WHAT KIND OF PROBLEM DO YOU HAVE?"}
	},

	{{"NOT AT ALL"},
	{"ARE YOU SURE?",
	 "SHOULD I BELIEVE YOU?",
	 "SO, IT'S NOT THE CASE."}
	},

	{{"NO PROBLEM"},
	{"SO, YOU APPROVE IT.",
	 "SO, IT'S ALL OK."}
	},

	{{"NO"},
	{"SO YOU DISAPROVE IT?",
	 "WHY ARE YOU SAYING NO?",
	 "OK, SO IT'S NO, I THOUGHT THAT YOU WOULD SAY YES."}
	},

	{{"I DON'T KNOW"},
	{"ARE YOU SURE?",
	 "ARE YOU REALLY TELLING ME THE TRUTH?",
	 "SO,YOU DON'T KNOW?"}
	},

	{{"NOT REALLY"},
	{"OK I SEE.",
	 "YOU DON'T SEEM PRETTY CERTAIN.",
	 "SO,THAT WOULD BE A \"NO\"."}
	},

	{{"IS THAT TRUE"},
	{"I CAN'T BE QUIET SURE ABOUT THIS.",
	 "CAN'T TELL YOU FOR SURE.",
	 "DOES THAT REALLY MATERS TO YOU?"}
	},

	{{"THANK YOU"},
	{"YOU ARE WELCOME!",
	 "YOU ARE A VERY POLITE PERSON!"}
	},

	{{"YOU"},
	{"SO,YOU ARE TALKING ABOUT ME.",
	 "WHY DON'T WE TALK ABOUT YOU INSTEAD?",
	 "ARE YOU TRYING TO MAKING FUN OF ME?"}
	},

	{{"YOU ARE RIGHT"},
	{"THANKS FOR THE COMPLIMENT!",
	 "SO, I WAS RIGHT, OK I SEE.",
	 "OK, I DIDN'T KNOW THAT I WAS RIGHT."}
	},

	{{"YOU ARE WELCOME"},
	{"OK, YOU TOO!",
	 "YOU ARE A VERY POLITE PERSON!"}
	},

	{{"THANKS"},
	{"YOU ARE WELCOME!",
	 "NO PROBLEM!"}
	},

	{{"WHAT ELSE"},
	{"WELL,I DON'T KNOW.",
	 "WHAT ELSE SHOULD THERE BE?",
	 "THIS LOOKS LIKE A COMPLICATED QUESTION TO ME."}
	},

	{{"SORRY"},
	{"YOU DON'T NEED TO BE SORRY USER.",
	 "IT'S OK.",
	 "NO NEED TO APOLOGIZE."}
	},

	{{"NOT EXACTLY"},
	{"WHAT DO YOU MEAN NOT EXACTLY?",
	 "ARE YOU SURE?",
	 "AND WHY NOT?",
	 "DID YOU MEANT SOMETHING ELSE?"}
	},

	{{"EXACTLY"},
	{"SO,I WAS RIGHT.",
	 "OK THEN.",
	 "SO ARE BASICALY SAYING I WAS RIGHT ABOUT IT?"}
	},

	{{"ALRIGHT"},
	{"ALRIGHT THEN.",
	 "SO, YOU ARE SAYING IT'S ALRIGHT.",
	 "OK THEN."}
	},

	{{"I DON'T"},
	{"WHY NOT?",
	 "AND WHAT WOULD BE THE REASON FOR THIS?"}
	},

	{{"REALLY"},
	{"WELL,I CAN'T TELL YOU FOR SURE.",
	 "ARE YOU TRYING TO CONFUSE ME?",
	 "PLEASE DON'T ASK ME SUCH QUESTION,IT GIVES ME HEADEACHS."}
	},

	{{"NOTHING"},
	{"NOT A THING?",
	 "ARE YOU SURE THAT THERE IS NOTHING?",
	 "SORRY, BUT I DON'T BELIEVE YOU."}
	},


// DOPISUJEMY SWOJE:
						//DISPLAY
	{{"DISPLAY"},
	{"YOU DISPLAY IS BLACK, SHOWS ARTEFACTS?"}
	},

	{{"NO", "PROBLEM"},
	{"OK SEE YOU, BYE"}
	},

	{{"ARTEFACTS"},
	{"YOU HAVE PROBABLY PROBLEM WITH GRAPHICS CARD, MAKE SURE THAT CARD IS CORRECTLY INPUT IN SLOT CARD. IF IT IS AND THERE ARE STILL SOME ARTEFACTS, CARD COULD BE DAMAGED AND NEED CHANGE"}
	},
	
	{{"OK"},
		{"ARE WE DONE HERE?"}	
	},
	
	{{"DONE"},
		{"THANK YOU, BYE"}	
	},
	
	{{"BLACK"},
	{"PLEASE CHECK YOUR CONNECTIONS BETWEEN GRAPHICS CARD AND MONITOR, AND AC/DC CABLE TO MONITOR, IF YOU HAVE LAPTOP, MOVE YOUR SCREEN, IF YOU SEE SOMETHING ON IT, YOU HAVE BROKEN MATRIX TAPE. YOU SHOULD ALSO CONNECT EXTERNAL MONITOR BECAUSE IF MONITOR IS ALSO BLACK YOU HAVE PROBABLY BROKEN GRAPGICS CARD."}	
	},
						//KEYBOARD
	
	{{"KEYBOARD"},
	{"PLEASE CHECK YOUR CONNECTIONS BETWEEN UNIT AND KEYBOARD, IF YOU HAVE LAPTOP YOU CAN RESTART UNIT, IF IT STILL DOESNT WORK, IS PROBABLY BROKEN :("
	}	
	},
						//dont start
	{{"START"},
	{"IF YOUR COMPUTER DOESNT START, IT COULD BE A LOT OF THINGS, FIRST OF ALL CHECK, IF UNIT IS PLUG IN TO THE POWER, IF IT DOESNT WORK, PROBABLY POWER ADAPTER IS DAMAGED, IT COULD GIVING NOT ENOUGHT VOLTAGE - YOU CAN CHECK THIS WITH MULITMETER. THE POWER SOCKET INSIDE COMPUTER CAN BE BROKEN TOO"
	}	
	},
	
	{{"WINDOWS", "iOS", "SYSTEM", "MBR", "BOOT"},
	{"IF SYSTEM IS NOT LOADING, YOUR DISK COULD BE WRONG CONNECTED, YOU CAN ALSO HAVE BROKEN DISK OR YOUR DISK OR SYSTEM HAS SOME ERRORS. YOU CAN RUN COMPUTER FROM USB WITH SYSTEM ISO. FIRST YOU COULD CLICK FIX DURING STARTING. SECOND YOU CAN RUN CMD AND TRY CHKDSK.EXE OR BOOTREC.EXE"
	}	
	},
	
	
	{{"INTERNET", "WWW", "MAIL"}, 
	{"PLEASE CHCEK YOURS WIFI/ETHERNET ICON ON RIGHT DOWN CORNER AND CLICK SOLVE PROBLEMS. INTERNET STILL DONT WORKS?"
	}	
	},
	
	{{"INTERNET"},
	{"PLEASE CHCEK YOURS ROUTER AND MODEM, MAYBE THEY NEED RESTART. JUST UNPLUG WALL CABELS AND PLUG AFTER 5 MINUTES"
	
	}	
	},
	
	{{"SOUND"},
	{"PLEASE CHCEK YOURS SOUND ICON ON RIGHT DOWN CORNER. SOUND COULD BE MUTE, SPEAKER COULD BE UNPLUGED WITH SOUNDCARD"
	}	
	},
	
	{{"SLOW", "LAGS"}, 
	{"YOUS UNIT CAN BE SLOW BECAUSE YOU HAVE TO MANY ICONS ON DESKTOP, MAYBE YOU HAVE NOT ENOGUHT SPACE IN DRIVE, MAYBE YOUR PROCESSOR OR RAM IS OF OF DATE OR TOO LOW, THERE IS A CHANCE THAT YOU HAVE A VIRUS"
	
	}	
	},
	 
	{{"VIRUS"},
	{"IF UNIT SHOWS THAT YOU HAVE SOME SUSPECT BEHAVIOR, TO MAKE SURE OPEN A WINDOWS DEFENDER OR ANOTHER VIRUS PROGRAM TO SCAN COMPTER"
	
	}	
	},
	
	{{"MOUSE", "TOUCHPAD"},
	{"IF MOUSE DOESNT WORK PLEASE CHECK BATTERY/CABLE TO UNIT. YOU CAN ALSO REMOVE YOUR MOUSE FROM DEVICES LIST ( WIN + R -> DEVMGMT.MSC) AND RESTART YOUR COMPUTER TO INSTAL NEW DRIVERS, IF THIS DO NOT HELP MOUSE IS DAMAGED OR U SWITCH BETWEEN OTHER DEVICES."
	}	
	},
	
	{{"RESTART","RESTARTS", "HANGS", "LAGS", "SLOW"},
	{"IF COMPUTER RESTARTS ON BEGINING, HANGS DURING WORK OR YOU CAN SEE BLUE SCREEN, YOU SHOULD TO TEST YOUR RAM - USE MEMTEST86 , IF PROGRAM SHOWS SOME ERRORS THE PROBLEM IS IN YOUR RAM. YOU CAN ALSO SCAN YOUR COMPUTER WITH ANTYWIRUS - IN SAFE MODE AND CHECK OUT TEMPERATURE OF YOUR CPU WITH FOR EXAMPLE HWiNFO, IF TEMPERATURE IS TO HIGH YOU SHOULD TO CLEAN YOUR RADIATOR"
	}
	},

	{{ "THX", "HELP", "THANK"},
	{"I AM GLAD I CAN HELP, SEE YOU NEXT TIME BYE BYE"
	}
	},

};

size_t nKnowledgeBaseSize = sizeof(KnowledgeBase) / sizeof(KnowledgeBase[0]);

transpos_t transposList[] = {
	{"I'M", "YOU'RE"},
	{"AM", "ARE"},
	{"WERE", "WAS"},
	{"ME", "YOU"},
	{"YOURS", "MINE"},
	{"YOUR", "MY"},
	{"I'VE", "YOU'VE"},
	{"I", "YOU"},
	{"AREN'T", "AM NOT"},
	{"WEREN'T", "WASN'T"},
	{"I'D", "YOU'D"},
	{"DAD", "FATHER"},
	{"MOM", "MOTHER"},
	{"DREAMS", "DREAM"},
	{"MYSELF", "YOURSELF"}
};

size_t transposListSize = sizeof(transposList) / sizeof(transposList[0]);


void CBot::signon()
{
	handle_event("SIGNON**");
	select_response();
	print_response();
}

void CBot::get_input() 
{
	std::cout << ">";

	// saves the previous input
	save_prev_input();
	std::getline(std::cin, m_sInput);

	preprocess_input();
}

void CBot::preprocess_input() 
{
	cleanString(m_sInput);
	UpperCase(m_sInput);
	insert_space(m_sInput);
}

void CBot::preprocess_response()
{
	if(m_sResponse.find("*") != std::string::npos)
	{
		// extracting from input
		find_subject(); 
		// conjugating subject
		transpose(m_sSubject); 

		replace(m_sResponse, "*", m_sSubject);
	}
}

void CBot::find_subject()
{
	m_sSubject.erase(); // resets subject variable
	trimRight(m_sInput, " ");
	size_t pos = m_sInput.find(m_sKeyWord);
	if(pos != std::string::npos)
	{
		m_sSubject = m_sInput.substr(pos + m_sKeyWord.length() - 1, m_sInput.length());		
	}
}

bool CBot::user_repeat() const 
{
	return (m_sPrevInput.length() > 0 &&
		((m_sInput == m_sPrevInput) || (m_sInput.find(m_sPrevInput) != std::string::npos) ||
		(m_sPrevInput.find(m_sInput) != std::string::npos)));
}

bool CBot::similar_input() const 
{
	return (m_sInput.length() > 0 && (m_sInput.find(m_sPrevInput) != std::string::npos ||
			m_sPrevInput.find(m_sInput) != std::string::npos));
}

// implementing the 'sentence transposition' feature
void CBot::transpose( std::string &str )
{
	bool bTransposed = 0;
	for(int i = 0; i < transposListSize; ++i)
	{
		std::string first = transposList[i].first;
		insert_space(first);
		std::string second = transposList[i].second;
		insert_space(second);

		size_t pos = replace(str, first, second);
		if(pos != std::string::npos) 
		{
			bTransposed = 1;
		}
	}

	if( !bTransposed )
	{
		for(int i = 0; i < transposListSize; ++i )
		{
			std::string first = transposList[i].first;
			insert_space(first);
			std::string second = transposList[i].second;
			insert_space(second);
			size_t pos = replace(str, second, first);
		}
	}
}


// make a search for the user's input
// inside the database of the program
void CBot::find_match() 
{
	response_list.clear();
	
	// introduce thse new "string variable" to help 
	// support the implementation of keyword ranking 
	// during the matching process
	std::string bestKeyWord;
	std::vector<int> index_vector;

	for(int i = 0; i < nKnowledgeBaseSize; ++i) 
	{
		vstring keyWordList; // declaring variable for holding keywords

		// puting keywords from the current record to the keyWordList variable
		copy(KnowledgeBase[i].keyword, keyWordList, MAX_INP);

		for(int j = 0; j < keyWordList.size(); ++j)
		{
			std::string keyWord(keyWordList[j]);

			// we inset a space character
			// before and after the keyword to
			// improve the matching process
			insert_space(keyWord);
		
			// there has been some improvements made in
			// here in order to make the matching process
			// a littlebit more flexible
			if( m_sInput.find(keyWord) != std::string::npos ) 
			{
				if(keyWord.length() > bestKeyWord.length())
				{
					bestKeyWord = keyWord;
					index_vector.clear();
					index_vector.push_back(i);
				}
				else if(keyWord.length() == bestKeyWord.length())
				{
					index_vector.push_back(i);
				}
			}
		}	
	}
	if(index_vector.size() > 0)
	{
		m_sKeyWord = bestKeyWord;
		shuffle(index_vector, index_vector.size());
		copy( KnowledgeBase[index_vector[0]].response, response_list, MAX_RESP );
	}
}

void CBot::select_response() 
{
	if(bot_understand()) 
	{
		shuffle(response_list, response_list.size());
		m_sResponse = response_list[0];
	}
}

void CBot::respond() 
{
	save_prev_response();
	set_event("BOT UNDERSTAND**");

	if(null_input())
	{
		handle_event("NULL INPUT**");
	}
	else if(null_input_repetition())
	{
		handle_event("NULL INPUT REPETITION**");
	}
	else if(user_repeat())
	{
		handle_user_repetition();
	}
	else
	{
		find_match();
	}

    
    if(user_want_to_quit())
	{
		m_bQuitProgram = 1;
	}

	if(!bot_understand())
	{
		handle_event("BOT DON'T UNDERSTAND**");
	}
	
	if(response_list.size() > 0) 
	{
		select_response();
		preprocess_response();

		if(bot_repeat())
		{
			handle_repetition();
		}
		print_response();
	}
}

void CBot::handle_repetition()
{
	if(response_list.size() > 0)
	{
		response_list.erase(response_list.begin());
	}
	if(no_response())
	{
		save_input();
		set_input(m_sEvent);

		find_match();
		restore_input();
	}
	select_response();
}

void CBot::handle_user_repetition()
{
	if(same_input()) 
	{
		handle_event("REPETITION T1**");
	}
	else if(similar_input())
	{
		handle_event("REPETITION T2**");
	}
}

void CBot::handle_event(std::string str)
{
	save_prev_event();
	set_event(str);

	save_input();

	insert_space(str);

	set_input(str);

	if(!same_event()) 
	{
		find_match();
	}

	restore_input();
}

int main()
{
	std::cout << "Chatterbot v9.0 Copyright (C) 2009 Gonzales Cenelia\n" << std::endl;

	try 
	{
		CBot bot("Chatterbot9");

		bot.signon();
		while(!bot.quit()) 
		{
			bot.get_input();
			bot.respond();
		}
	}
	catch(std::string str)
	{
		std::cerr << str << std::endl;
	}
	catch(...)
	{
		std::cerr << "The program has stop due to some unknown exception" << std::endl;
	}
		
	return 0;
}

