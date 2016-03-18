/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol EKLayoutContainerViewDelegate;
@interface EKLayoutContainerView : UIView {

	id<EKLayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKLayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<EKLayoutContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<EKLayoutContainerViewDelegate>)delegate;
@end

