/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManagerZephyr
+(id)decompositionMap;
+(id)compositionMap;
-(id)replacementForDoubleSpace;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)sentenceDelimitingCharacters;
-(BOOL)doesComposeText;
@end

