/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_fr.bundle/TextInput_fr
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_fr/TextInput_fr-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_fr : TIKeyboardInputManagerZephyr
-(id)accentKeyStringForInputPrefix:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)terminatorsDeletingAutospace;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)nonstopPunctuationCharacters;
-(BOOL)doesComposeText;
-(id)keyboardConfigurationAccentKeyString;
@end

