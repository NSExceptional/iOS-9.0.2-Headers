/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MSCLAudioPickerSourceViewController;
@class UIImage, NSString, UIViewController;

@interface MSCLAudioPickerSource : NSObject <NSCopying> {

	UIImage* _icon;
	NSString* _title;
	UIViewController*<MSCLAudioPickerSourceViewController> _viewController;

}

@property (nonatomic,copy) UIImage * icon;                                                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIViewController*<MSCLAudioPickerSourceViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewController:(UIViewController*<MSCLAudioPickerSourceViewController>)arg1 ;
-(UIViewController*<MSCLAudioPickerSourceViewController>)viewController;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end

