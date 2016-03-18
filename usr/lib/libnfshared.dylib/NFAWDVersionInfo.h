/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class NSString, AWDNFCVersions;

@interface NFAWDVersionInfo : NSObject <NFAWDEventProtocol> {

	unsigned nfccHWVersion;
	unsigned nfccROMVersion;
	unsigned nfccFWVersion;
	unsigned nfccFWRevision;
	unsigned nfccMWVersion;
	unsigned seDeviceType;
	unsigned seHWVersion;
	unsigned seFWVersion;
	unsigned seSignKeyType;
	unsigned seSeqCount;
	unsigned seRefCount;
	unsigned seRestrictedMode;
	unsigned seOSMode;
	unsigned seMigrationState;
	unsigned seMigrationPkgs;
	unsigned seMigrationInst;
	NSString* sePlatformId;
	AWDNFCVersions* _metric;

}

@property (assign,nonatomic) unsigned nfccHWVersion; 
@property (assign,nonatomic) unsigned nfccROMVersion; 
@property (assign,nonatomic) unsigned nfccFWVersion; 
@property (assign,nonatomic) unsigned nfccFWRevision; 
@property (assign,nonatomic) unsigned nfccMWVersion; 
@property (nonatomic,retain) NSString * sePlatformId; 
@property (assign,nonatomic) unsigned seDeviceType; 
@property (assign,nonatomic) unsigned seHWVersion; 
@property (assign,nonatomic) unsigned seFWVersion; 
@property (assign,nonatomic) unsigned seSignKeyType; 
@property (assign,nonatomic) unsigned seSeqCount; 
@property (assign,nonatomic) unsigned seRefCount; 
@property (assign,nonatomic) unsigned seOSMode; 
@property (assign,nonatomic) unsigned seRestrictedMode; 
@property (assign,nonatomic) unsigned seMigrationState; 
@property (assign,nonatomic) unsigned seMigrationPkgs; 
@property (assign,nonatomic) unsigned seMigrationInst; 
@property (nonatomic,retain) AWDNFCVersions * metric;                //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setMetric:(AWDNFCVersions *)arg1 ;
-(AWDNFCVersions *)metric;
-(void)setNfccHWVersion:(unsigned)arg1 ;
-(void)setNfccROMVersion:(unsigned)arg1 ;
-(void)setNfccFWVersion:(unsigned)arg1 ;
-(void)setNfccFWRevision:(unsigned)arg1 ;
-(void)setSeDeviceType:(unsigned)arg1 ;
-(void)setSeHWVersion:(unsigned)arg1 ;
-(void)setSeFWVersion:(unsigned)arg1 ;
-(void)setSeSignKeyType:(unsigned)arg1 ;
-(void)setSeOSMode:(unsigned)arg1 ;
-(void)setSeRestrictedMode:(unsigned)arg1 ;
-(void)setSeMigrationState:(unsigned)arg1 ;
-(void)setSeMigrationPkgs:(unsigned)arg1 ;
-(void)setSeMigrationInst:(unsigned)arg1 ;
-(unsigned)nfccHWVersion;
-(unsigned)nfccROMVersion;
-(unsigned)nfccFWVersion;
-(unsigned)nfccFWRevision;
-(unsigned)seDeviceType;
-(unsigned)seHWVersion;
-(unsigned)seFWVersion;
-(unsigned)seSignKeyType;
-(unsigned)seOSMode;
-(unsigned)seRestrictedMode;
-(unsigned)seMigrationState;
-(unsigned)seMigrationPkgs;
-(unsigned)seMigrationInst;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)setNfccMWVersion:(unsigned)arg1 ;
-(void)setSePlatformId:(NSString *)arg1 ;
-(void)setSeSeqCount:(unsigned)arg1 ;
-(void)setSeRefCount:(unsigned)arg1 ;
-(unsigned)nfccMWVersion;
-(NSString *)sePlatformId;
-(unsigned)seSeqCount;
-(unsigned)seRefCount;
@end

