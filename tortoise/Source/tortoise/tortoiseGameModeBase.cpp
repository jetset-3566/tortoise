// Copyright Epic Games, Inc. All Rights Reserved.


#include "tortoiseGameModeBase.h"

FString AtortoiseGameModeBase::ChangeLetters(FString InputLetters)
{
    FString result;
	TArray<FString> Chars;

	if (!InputLetters.IsEmpty())
	{
		for (auto CharIt(InputLetters.CreateConstIterator()); CharIt; ++CharIt)
		{
			TCHAR Char = *CharIt;
			Chars.Add(FString(1, &Char));
		}

		Chars.RemoveAt(Chars.Num() - 1, 1);
	}

	for (int8 i = 0; i<Chars.Num(); i++)
	{
		bool bIsCopy = false;
		int8 copyNumber = 0;
		for (int8 j = 0; j<Chars.Num(); j++)
		{
			if (Chars[i] == Chars[j])
			{
				copyNumber++;
				if (copyNumber >=2)
				{
					bIsCopy = true;
				}				
			}
		}
		if (bIsCopy)
			result += ")";
		else
			result += "(";		
	}

    return result;
}
