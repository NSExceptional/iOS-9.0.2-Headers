/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

@interface SKUIBrowseItemComponent : SKUIPageComponent {

	NSString* _title;
	NSString* _subtitle;
	long long _index;
	SKUIImageViewElement* _decorationImage;
	BOOL _showTopBorder;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage;              //@synthesize decorationImage=_decorationImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                    //@synthesize showTopBorder=_showTopBorder - In the implementation block
-(NSString *)title;
-(NSString *)subtitle;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(long long)componentType;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(SKUIImageViewElement *)decorationImage;
-(BOOL)showTopBorder;
-(id)initWithViewElement:(id)arg1 ;
@end

