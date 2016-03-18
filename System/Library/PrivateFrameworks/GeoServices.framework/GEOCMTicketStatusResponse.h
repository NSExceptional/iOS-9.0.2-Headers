/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPDetails, GEORPNotification, NSString;

@interface GEOCMTicketStatusResponse : PBCodable <NSCopying> {

	double _submissionDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _ticketId;
	int _ticketState;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasTicketId; 
@property (nonatomic,retain) NSString * ticketId;                           //@synthesize ticketId=_ticketId - In the implementation block
@property (assign,nonatomic) BOOL hasSubmissionDate; 
@property (assign,nonatomic) double submissionDate;                         //@synthesize submissionDate=_submissionDate - In the implementation block
@property (assign,nonatomic) BOOL hasTicketState; 
@property (assign,nonatomic) int ticketState;                               //@synthesize ticketState=_ticketState - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPDetails * details;                        //@synthesize details=_details - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEORPNotification *)notification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTicketId;
-(NSString *)ticketId;
-(void)setTicketId:(NSString *)arg1 ;
-(GEORPDetails *)details;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(void)setHasSubmissionDate:(BOOL)arg1 ;
-(BOOL)hasTicketState;
-(BOOL)hasSubmissionDate;
-(BOOL)hasNotification;
-(int)ticketState;
-(void)setSubmissionDate:(double)arg1 ;
-(BOOL)hasDetails;
-(void)setTicketState:(int)arg1 ;
-(double)submissionDate;
-(void)setHasTicketState:(BOOL)arg1 ;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

