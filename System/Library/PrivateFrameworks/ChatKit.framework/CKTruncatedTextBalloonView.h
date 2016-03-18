/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKHyperlinkBalloonView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {

	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;                 //@synthesize chevron=_chevron - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
@end
