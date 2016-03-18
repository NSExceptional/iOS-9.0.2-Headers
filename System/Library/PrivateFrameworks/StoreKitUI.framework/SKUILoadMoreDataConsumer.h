/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer {

	NSSet* _unavailableItemIdentifiers;

}

@property (nonatomic,copy) NSSet * unavailableItemIdentifiers;              //@synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers - In the implementation block
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)setUnavailableItemIdentifiers:(NSSet *)arg1 ;
-(NSSet *)unavailableItemIdentifiers;
-(id)_itemsWithDictionary:(id)arg1 ;
@end

