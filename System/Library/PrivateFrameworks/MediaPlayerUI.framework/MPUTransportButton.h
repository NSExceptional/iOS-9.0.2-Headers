/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPUTransportButtonEventHandler;


@protocol MPUTransportButton <NSObject>
@property (nonatomic,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) long long transportButtonImageViewContentMode; 
@required
+(id)transportButton;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
-(void)prepareForReuse;
-(BOOL)adjustsImageWhenHighlighted;
-(void)applyTransportButtonLayoutAttributes:(SCD_Struct_MP5)arg1;
-(BOOL)wantsCustomHighlightAppearance;
-(MPUTransportButtonEventHandler *)transportButtonEventHandler;
-(void)setTransportButtonImageViewContentMode:(long long)arg1;
-(long long)transportButtonImageViewContentMode;

@end

