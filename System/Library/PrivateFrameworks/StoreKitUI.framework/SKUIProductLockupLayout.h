/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, SKUIViewElementLayoutContext, SKUIViewElement;

@interface SKUIProductLockupLayout : NSObject {

	long long _bottomLeftLayoutStyle;
	NSMutableArray* _bottomLeftViewElements;
	NSMutableArray* _bottomRightViewElements;
	SKUIViewElementLayoutContext* _layoutContext;
	NSMutableArray* _middleLeftViewElements;
	SKUIViewElement* _productImageElement;
	NSMutableArray* _topLeftViewElements;
	NSMutableArray* _topRightViewElements;

}

@property (nonatomic,readonly) long long bottomLeftLayoutStyle;              //@synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle - In the implementation block
-(id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(double)metadataWidthForWidth:(double)arg1 ;
-(id)viewElementsForSection:(long long)arg1 ;
-(SKUIProductLockupLayoutSizing)layoutWidthsForWidth:(double)arg1 ;
-(SKUIProductLockupLayoutSizing)sizingToFitWidth:(double)arg1 ;
-(void)enumerateViewElementsForWidth:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)bottomLeftLayoutStyle;
-(double)topPaddingForViewElement:(id)arg1 ;
-(double)bottomPaddingForViewElement:(id)arg1 ;
-(CGSize)_sizeForVerticalViewElements:(id)arg1 width:(double)arg2 ;
-(CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 ;
-(CGSize)_sizeForSegmentedControl:(id)arg1 width:(double)arg2 ;
@end

