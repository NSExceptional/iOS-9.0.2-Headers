/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertUIItemDetailsSummaryCell.h>

@class NSArray;

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell {

	NSArray* _details;

}

@property (nonatomic,retain) NSArray * details;              //@synthesize details=_details - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(BOOL)arg3 ;
-(void)setDetailsWithCertificateTrust:(SecTrustRef)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(BOOL)arg3 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
@end

