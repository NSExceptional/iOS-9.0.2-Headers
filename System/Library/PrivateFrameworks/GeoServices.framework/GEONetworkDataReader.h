/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned long long _dataLength;
	const void* _bytes;
	unsigned long long _bookmarkOffset;
	unsigned long long _offset;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(void)markOffset;
-(id)readData:(unsigned)arg1 ;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(BOOL)hasUnreadData;
-(void)appendNetworkData:(id)arg1 ;
-(id)allData;
-(void)seekToMarkedOffset;
-(id)readString;
@end

