/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, UIKeyboardEmojiCategory;

@interface UIKeyboardEmojiInputController : NSObject {

	int _currentSequence;
	NSMutableDictionary* _usageHistory;
	NSMutableArray* _recents;
	NSMutableDictionary* _skinToneBaseKeyPreferences;
	UIKeyboardEmojiCategory* _lastViewedCategory;

}

@property (assign) UIKeyboardEmojiCategory * lastViewedCategory;              //@synthesize lastViewedCategory=_lastViewedCategory - In the implementation block
+(void)writeEmojiDefaultsAndReleaseActiveInputView;
+(Class)classForInputView;
+(void)writeEmojiDefaults;
+(id)activeInputView;
-(void)dealloc;
-(id)initWithInputView:(id)arg1 ;
-(UIKeyboardEmojiCategory *)lastViewedCategory;
-(id)skinToneBaseKeyPreferences;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(void)emojiUsed:(id)arg1 ;
-(id)recents;
-(void)setLastViewedCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1 ;
-(double)scoreForSequence:(int)arg1 ;
-(double)scoreForEmoji:(id)arg1 ;
-(BOOL)isAncientSequence:(int)arg1 ;
-(void)clearAncientHistory;
-(id)defaultsDictionary;
@end

