/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError, NSArray, CKOperationMetrics;

@interface CKOperationResult : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSError* _error;
	NSArray* _requestUUIDs;
	CKOperationMetrics* _metrics;

}

@property (nonatomic,retain) NSString * operationID;                    //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * requestUUIDs;                    //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) CKOperationMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CKOperationMetrics *)metrics;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(NSArray *)requestUUIDs;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
@end
