/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier {

	double _cornerRadius;
	int _corners;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) int corners;                      //@synthesize corners=_corners - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(int)corners;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGPathRef)_copyClippingPathForRect:(CGRect)arg1 ;
-(void)setCorners:(int)arg1 ;
@end

