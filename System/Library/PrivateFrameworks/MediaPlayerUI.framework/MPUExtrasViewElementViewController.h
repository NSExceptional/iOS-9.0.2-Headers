/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasElementViewController.h>

@class IKViewElement;

@interface MPUExtrasViewElementViewController : MPUExtrasElementViewController {

	BOOL _embedded;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) BOOL matchParentHeight; 
@property (assign,nonatomic) BOOL embedded;                                     //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) id preferredLayoutGuide; 
@property (nonatomic,readonly) long long preferredLayoutAttribute; 
-(void)viewDidLoad;
-(void)setEmbedded:(BOOL)arg1 ;
-(BOOL)matchParentHeight;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
-(BOOL)embedded;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
@end

