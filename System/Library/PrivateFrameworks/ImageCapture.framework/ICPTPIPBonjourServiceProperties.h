/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface ICPTPIPBonjourServiceProperties : NSObject {

	CFSocketRef _hostSocket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	unsigned _hostMaxConnections;
	int _hostSecuritylevel;
	NSString* _serviceType;
	NSDictionary* _txtRecordsDict;
	CFNetServiceRef _publishedService;
	NSMutableArray* _clients;
	int _clientSpinLock;
	id _delegate;
	int _clientsSpinLock;

}

@property (assign) CFSocketRef hostSocket;                        //@synthesize hostSocket=_hostSocket - In the implementation block
@property (retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign) unsigned short hostPort;                       //@synthesize hostPort=_hostPort - In the implementation block
@property (retain) NSString * hostGUID;                           //@synthesize hostGUID=_hostGUID - In the implementation block
@property (assign) unsigned hostMaxConnections;                   //@synthesize hostMaxConnections=_hostMaxConnections - In the implementation block
@property (assign) int hostSecurityLevel;                         //@synthesize hostSecuritylevel=_hostSecuritylevel - In the implementation block
@property (retain) NSString * serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSDictionary * txtRecordsDict;                 //@synthesize txtRecordsDict=_txtRecordsDict - In the implementation block
@property (assign) CFNetServiceRef publishedService;              //@synthesize publishedService=_publishedService - In the implementation block
@property (retain) NSMutableArray * clients;                      //@synthesize clients=_clients - In the implementation block
@property (assign) int clientsSpinLock;                           //@synthesize clientsSpinLock=_clientsSpinLock - In the implementation block
@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(NSString *)hostName;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(NSMutableArray *)clients;
-(void)setHostName:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)setHostGUID:(NSString *)arg1 ;
-(void)setTxtRecordsDict:(NSDictionary *)arg1 ;
-(CFSocketRef)hostSocket;
-(void)setHostSocket:(CFSocketRef)arg1 ;
-(unsigned short)hostPort;
-(void)setHostPort:(unsigned short)arg1 ;
-(NSString *)hostGUID;
-(unsigned)hostMaxConnections;
-(void)setHostMaxConnections:(unsigned)arg1 ;
-(int)hostSecurityLevel;
-(void)setHostSecurityLevel:(int)arg1 ;
-(NSDictionary *)txtRecordsDict;
-(CFNetServiceRef)publishedService;
-(void)setPublishedService:(CFNetServiceRef)arg1 ;
-(int)clientsSpinLock;
-(void)setClientsSpinLock:(int)arg1 ;
-(void)finalize;
@end

