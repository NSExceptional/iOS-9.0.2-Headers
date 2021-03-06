/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIVisualEffectLayerConfig.h>

@class UIColor, NSDictionary;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _vibrantColor;
	UIColor* _tintColor;
	NSDictionary* _filterAttributes;

}

@property (nonatomic,readonly) UIColor * vibrantColor;                            //@synthesize vibrantColor=_vibrantColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * filterAttributes;              //@synthesize filterAttributes=_filterAttributes - In the implementation block
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4 ;
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 ;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
-(NSDictionary *)filterAttributes;
-(UIColor *)vibrantColor;
@end

