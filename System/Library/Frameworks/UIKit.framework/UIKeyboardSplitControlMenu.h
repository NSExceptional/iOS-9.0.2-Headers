/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

	NSMutableArray* m_menuOptions;
	CGSize m_preferredSize;
	/*^block*/id _finishSplitTransitionBlock;

}

@property (nonatomic,copy) id finishSplitTransitionBlock;              //@synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setSplitAndUndocked:(BOOL)arg1 ;
-(unsigned long long)numberOfItems;
-(void)didFinishSplitTransition;
-(CGSize)preferredSize;
-(unsigned long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(id)finishSplitTransitionBlock;
@end

