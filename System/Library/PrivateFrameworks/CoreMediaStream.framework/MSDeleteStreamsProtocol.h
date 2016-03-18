/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSMutableArray;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {

	MSDSPCContext* _context;
	NSMutableArray* _collectionsInFlight;

}

@property (assign,nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate; 
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_resetConnectionVariables;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)sendDeletionRequestForAssetCollections:(id)arg1 ;
-(void)abort;
@end
