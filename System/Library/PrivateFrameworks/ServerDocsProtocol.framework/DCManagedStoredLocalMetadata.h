/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface DCManagedStoredLocalMetadata : NSManagedObject
+(id)entityName;
+(id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)dictionaryRepresentation;
-(void)updateWithStoredLocalMetadataDictionary:(id)arg1 ;
@end
