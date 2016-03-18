/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLMediaTypeCountedSet : NSObject {

	map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _map;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addMediaType:(unsigned)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateMediaTypesWithBlock:(/*^block*/id)arg1 ;
@end

