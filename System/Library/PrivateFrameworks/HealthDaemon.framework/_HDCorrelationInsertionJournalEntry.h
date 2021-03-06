/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSData;

@interface _HDCorrelationInsertionJournalEntry : HDJournalEntry {

	NSUUID* _correlationUUID;
	NSData* _objectUUIDsData;
	long long _provenance;

}

@property (nonatomic,readonly) NSUUID * correlationUUID;              //@synthesize correlationUUID=_correlationUUID - In the implementation block
@property (nonatomic,readonly) NSData * objectUUIDsData;              //@synthesize objectUUIDsData=_objectUUIDsData - In the implementation block
@property (nonatomic,readonly) long long provenance;                  //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCorrelationUUID:(id)arg1 objectUUIDsData:(id)arg2 provenance:(long long)arg3 ;
-(NSUUID *)correlationUUID;
-(NSData *)objectUUIDsData;
-(long long)provenance;
@end

