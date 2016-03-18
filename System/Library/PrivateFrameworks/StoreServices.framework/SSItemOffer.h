/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSItem, NSMutableDictionary, NSString, NSArray, SSItemMedia, SSDialog, SSNetworkConstraints, NSSet;

@interface SSItemOffer : NSObject <NSCopying> {

	SSItem* _item;
	NSMutableDictionary* _offerDictionary;
	NSString* _offerIdentifier;
	NSArray* _supportedDevices;

}

@property (nonatomic,readonly) NSString * offerIdentifier;                                             //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceDisplay; 
@property (nonatomic,readonly) NSString * actionDisplayName; 
@property (getter=isOneTapOffer,nonatomic,readonly) BOOL oneTapOffer; 
@property (getter=isPreorder,nonatomic,readonly) BOOL preorder; 
@property (nonatomic,readonly) SSItemMedia * offerMedia; 
@property (nonatomic,readonly) SSDialog * confirmationDialog; 
@property (nonatomic,readonly) SSDialog * successDialog; 
@property (nonatomic,readonly) NSArray * supportedDevices; 
@property (nonatomic,readonly) SSNetworkConstraints * networkConstraints; 
@property (nonatomic,readonly) NSSet * accountIdentifiers; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long estimatedDiskSpaceNeeded; 
@property (nonatomic,readonly) id requiredSoftwareCapabilities; 
@property (nonatomic,readonly) BOOL shouldShowPlusIcon; 
@property (assign,setter=_setOfferItem:,getter=_offerItem,nonatomic) SSItem * _offerItem;              //@synthesize item=_item - In the implementation block
+(id)_preferredOfferIdentifiers;
-(BOOL)isPreorder;
-(NSString *)actionType;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(SSNetworkConstraints *)networkConstraints;
-(void)_setOfferItem:(id)arg1 ;
-(SSDialog *)confirmationDialog;
-(SSDialog *)successDialog;
-(NSArray *)supportedDevices;
-(NSSet *)accountIdentifiers;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(SSItem *)_offerItem;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(void)setActionDisplayName:(NSString *)arg1 ;
-(void)setOneTapOffer:(BOOL)arg1 ;
-(NSString *)priceDisplay;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(SSItemMedia *)offerMedia;
-(id)documentUTI;
-(id)allowedToneStyles;
-(id)playableMedia;
-(NSString *)offerIdentifier;
-(id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)shouldShowPlusIcon;
-(NSString *)actionDisplayName;
-(BOOL)isOneTapOffer;
@end

