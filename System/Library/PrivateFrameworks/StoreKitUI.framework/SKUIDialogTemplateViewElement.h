/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray;

@interface SKUIDialogTemplateViewElement : SKUIViewElement {

	long long _dialogType;

}

@property (nonatomic,readonly) long long dialogType;                        //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) NSArray * buttons; 
-(SKUILabelViewElement *)title;
-(SKUILabelViewElement *)message;
-(NSArray *)buttons;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)dialogType;
@end

