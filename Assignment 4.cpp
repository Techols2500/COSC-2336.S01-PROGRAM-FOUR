//************************************************************************** 
//
// Programming Excerise 4   
// CLASS: COSC 2336.S01
// AUTHOR: TYLER ECHOLS 
// DAtE: Oct 2017  
//
//************************************************************************** 

#include <stdlib.h>

#include "Token.h"

void main(int argc, char * argv[])
{
	WCS_String Temp;
	Token Toke;

	if (argc < 2)
	{
		cout << "You need to place the file name on the command line" << endl;
		exit(0);
	}
	else
		Temp = argv[1];
	Token::OpenFile(Temp);
	do {
		Toke.Build();
		switch (Toke.GetType())
		{
		
		case Token::UnknownToken:
			cout << "I don't have any idea what you are saying" << endl;
			break;
		case Token::KeywordEvalToken:
			cout << "Found Keyword EVAL" << endl;
			break;
		case Token::EndOfInputToken:
			cout << "Found end of input file" << endl;
			break; 
		case Token::VariableToken:
			cout << "Found Variable Token " << endl;
			break;
		case Token::ConstantToken: 
			cout << "Found Constant Token " << endl;
			break;
		case Token::KeywordExpToken:
			cout << "Found keyword EXP " << endl;
			break; 
		case Token::KeywordValueToken:
			cout << "Found Keyword Exp " << endl;
			break;
		case Token::OperatorPlusToken:
			cout << "Found Operator + " << endl;
			break;
		case Token::OperatorMinusToken:
			cout << "Found Operator - " << endl;
			break; 
		case Token::OperatorAsteriskToken:
			cout << "Found Operator * " << endl;
			break;
		case Token::OperatorSlashToken:
			cout << "Found Operator / " << endl;
			break;
		case Token::SymbolOpenParenToken:
			cout << "Found Operator ( " << endl;
			break;
		case Token::SymbolCloseParenToken:
			cout << "Found Operator ) " << endl;
			break;
		case Token::SymbolSemiColonToken:
			cout << "Found Operator ; " << endl;
			break;
		default:
			cout << "Should not get here" << endl;
		}
	} while (Toke.GetType() != Token::EndOfInputToken);
	Token::CloseFile();
}
