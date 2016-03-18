/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSCache, NSStringDrawingContext, MPUTextDrawingCacheKey, NSHashTable, NSOperationQueue, NSDictionary;

@interface MPUTextDrawingCache : NSObject {

	NSCache* _cache;
	NSStringDrawingContext* _reusableStringDrawingContext;
	MPUTextDrawingCacheKey* _reusableTextDrawingCacheKey;
	NSHashTable* _invalidationObservers;
	unsigned long long _invalidationNotificationCoalescingRequestsCount;
	BOOL _wasInvalidatedWithoutNotifyingObservers;
	NSOperationQueue* _preHeatingOperationQueue;
	BOOL _opaque;
	BOOL _usesImageCachingInsteadOfStringDrawingContextCaching;
	NSDictionary* _textAttributes;
	unsigned long long _maximumNumberOfLines;
	double _displayScale;
	/*^block*/id _attributedTextProvider;

}

@property (nonatomic,copy) NSDictionary * textAttributes;                                                                                                                                                                          //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;                                                                                                                                                              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) double displayScale;                                                                                                                                                                                  //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,copy) id attributedTextProvider;                                                                                                                                                                              //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
@property (assign,setter=_setOpaque:,getter=_isOpaque,nonatomic) BOOL opaque;                                                                                                                                                      //@synthesize opaque=_opaque - In the implementation block
@property (assign,setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:,getter=_usesImageCachingInsteadOfStringDrawingContextCaching,nonatomic) BOOL usesImageCachingInsteadOfStringDrawingContextCaching;              //@synthesize usesImageCachingInsteadOfStringDrawingContextCaching=_usesImageCachingInsteadOfStringDrawingContextCaching - In the implementation block
+(void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned long long)arg2 ;
+(id)_drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned long long)arg7 opaque:(BOOL)arg8 displayScale:(double)arg9 attributedTextProvider:(/*^block*/id)arg10 ;
+(CGSize)_validateAllowedSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(double)displayScale;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)_invalidate;
-(unsigned long long)maximumNumberOfLines;
-(id)drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 ;
-(void)addInvalidationObserver:(id)arg1 ;
-(void)removeInvalidationObserver:(id)arg1 ;
-(id)attributedTextProvider;
-(void)setAttributedTextProvider:(id)arg1 ;
-(void)_notifyInvalidationObservers;
-(void)_setOpaque:(BOOL)arg1 ;
-(void)_setUsesImageCachingInsteadOfStringDrawingContextCaching:(BOOL)arg1 ;
-(void)beginCoalescingInvalidationNotifications;
-(void)endCoalescingInvalidationNotifications;
-(void)preHeatForStrings:(id)arg1 allowedSize:(CGSize)arg2 ;
-(BOOL)_isOpaque;
-(BOOL)_usesImageCachingInsteadOfStringDrawingContextCaching;
-(void)setDisplayScale:(double)arg1 ;
@end

