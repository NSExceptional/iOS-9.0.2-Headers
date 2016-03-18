/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSWelcomeNativeViewController.h>

@protocol MusicJSWelcomeNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)close:(id)arg1;
-(void)setWelcomeDocument:(id)arg1 :(id)arg2;

@end


@protocol MusicJSWelcomeNativeViewControllerDelegate;
@class IKDOMDocument, IKAppDocument, NSDictionary, IKJSNavigationDocument;

@interface MusicJSWelcomeNativeViewController : MusicJSNativeViewController <MusicJSWelcomeNativeViewController> {

	IKDOMDocument* _welcomeJSDocument;
	IKAppDocument* _welcomeDocument;
	NSDictionary* _welcomeDocumentOptions;
	id<MusicJSWelcomeNativeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicJSWelcomeNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKAppDocument * welcomeDocument;                                           //@synthesize welcomeDocument=_welcomeDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * welcomeDocumentOptions;                                     //@synthesize welcomeDocumentOptions=_welcomeDocumentOptions - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setDelegate:(id<MusicJSWelcomeNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSWelcomeNativeViewControllerDelegate>)delegate;
-(void)close:(id)arg1 ;
-(void)setWelcomeDocument:(id)arg1 :(id)arg2 ;
-(id)nativeViewIdentifier;
-(IKAppDocument *)welcomeDocument;
-(NSDictionary *)welcomeDocumentOptions;
@end

