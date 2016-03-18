/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/MSCLPhotoPickerDelegate.h>

@protocol MSCLAttachmentAlertDelegate;
@class UIAlertAction, SKUIClientContext, MSCLConfiguration, MSCLPhotoPickerShelfViewController, NSArray, NSString;

@interface MSCLAttachmentAlertController : UIAlertController <MSCLPhotoPickerDelegate> {

	UIAlertAction* _action0;
	SKUIClientContext* _clientContext;
	MSCLConfiguration* _configuration;
	id<MSCLAttachmentAlertDelegate> _MSCLDelegate;
	MSCLPhotoPickerShelfViewController* _photoPickerViewController;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy,readonly) MSCLConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLAttachmentAlertDelegate> MSCLDelegate;              //@synthesize MSCLDelegate=_MSCLDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_cancelButtonTitle;
-(MSCLConfiguration *)configuration;
-(NSArray *)selectedAttachments;
-(void)setMSCLDelegate:(id<MSCLAttachmentAlertDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 clientContext:(id)arg2 ;
-(void)MSCLPhotoPickerSelectedAttachmentsDidChange:(id)arg1 ;
-(id)_photoLibraryButtonTitle;
-(void)_music_button0Action;
-(id)_cameraButtonTitle;
-(void)_finishWithAttachmentResult:(long long)arg1 ;
-(id)_uploadAudioTitle;
-(id)_recordAudioTitle;
-(id<MSCLAttachmentAlertDelegate>)MSCLDelegate;
-(id)_chooseSongButtonTitle;
-(SKUIClientContext *)clientContext;
@end

