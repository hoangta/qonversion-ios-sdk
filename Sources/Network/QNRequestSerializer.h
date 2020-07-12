#import <Foundation/Foundation.h>

#import "Qonversion.h"

@interface QNRequestSerializer : NSObject

- (NSDictionary *)launchData;

- (NSDictionary *)purchaseData:(SKProduct *)product
                   transaction:(SKPaymentTransaction *)transaction;

- (NSDictionary *)attributionDataWithDict:(NSDictionary *)data fromProvider:(QNAttributionProvider)provider;

@end


