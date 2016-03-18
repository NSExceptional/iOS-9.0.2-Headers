/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TIWordSearchController : NSObject {

	NSMapTable* _inputModeToWordSearchMapping;

}

@property (nonatomic,retain) NSMapTable * inputModeToWordSearchMapping;              //@synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping - In the implementation block
+(id)sharedWordSearchController;
-(void)dealloc;
-(id)init;
-(id)wordSearchForInputMode:(id)arg1 ;
-(NSMapTable *)inputModeToWordSearchMapping;
-(void)setWordSearch:(id)arg1 forInputMode:(id)arg2 ;
-(void)setInputModeToWordSearchMapping:(NSMapTable *)arg1 ;
@end

