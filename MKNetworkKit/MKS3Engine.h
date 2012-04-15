//
//  MKS3Engine.h
//  MKNetworkKit-iOS
//
//  Created by Mugunth Kumar on 15/4/12.
//  Copyright (c) 2012 Steinlogic. All rights reserved.
//

#import "MKNetworkEngine.h"

typedef void (^ArrayBlock)(NSMutableArray* listOfModelBaseObjects);
typedef void (^DictionaryBlock)(NSMutableDictionary* dictionaryOfModelBaseObjects);
typedef void (^ErrorBlock)(NSError* engineError);
typedef void (^StatusBlock)(int statusCode);

@interface MKS3Engine : MKNetworkEngine

-(id) initWithAccessId:(NSString*) accessId secretKey:(NSString*) secretKey;
-(void) enumerateBucketsOnSucceeded:(ArrayBlock) succeededBlock onError:(ErrorBlock) errorBlock;
-(void) enumerateItemsInBucket:(NSString*) bucketId onSucceeded:(ArrayBlock) succeededBlock onError:(ErrorBlock) errorBlock;
-(void) uploadFile:(NSString*) filePath toLocation:(NSString*) location onSucceeded:(ArrayBlock) succeededBlock onError:(ErrorBlock) errorBlock;
@end