/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SUCellConfiguration;

@interface SUTableCellContentOverlayView : UIView {

	SUCellConfiguration* _configuration;

}

@property (nonatomic,retain) SUCellConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(SUCellConfiguration *)configuration;
@end
