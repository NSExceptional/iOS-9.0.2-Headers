/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIJSDOMFeatureNavigationDocument, SKUIViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement {

	SKUIJSDOMFeatureNavigationDocument* _leftNavigationDocument;
	long long _preferredDisplayMode;
	SKUIJSDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,readonly) long long preferredDisplayMode;                                  //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (readonly) SKUIJSDOMFeatureNavigationDocument * leftNavigationDocument; 
@property (readonly) SKUIJSDOMFeatureNavigationDocument * rightNavigationDocument; 
@property (nonatomic,readonly) SKUIViewElement * leftSplitElement; 
@property (nonatomic,readonly) SKUIViewElement * rightSplitElement; 
@property (nonatomic,readonly) BOOL usesInlineSplitContent; 
+(id)supportedFeatures;
-(long long)preferredDisplayMode;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)_splitElementForIndex:(long long)arg1 ;
-(SKUIViewElement *)leftSplitElement;
-(SKUIViewElement *)rightSplitElement;
-(SKUIJSDOMFeatureNavigationDocument *)leftNavigationDocument;
-(SKUIJSDOMFeatureNavigationDocument *)rightNavigationDocument;
-(BOOL)usesInlineSplitContent;
@end

